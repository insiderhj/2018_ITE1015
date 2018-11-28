#include "calendar.h"
#include <iostream>
#include <string>

using namespace std;

Date::Date() : _year(0), _month(1), _day(1) {}

Date::Date(int year, int month, int day) : _year(year), _month(month), _day(day) {}

int Date::GetDaysInYear(int year) {
	if (year % 400 == 0) return 366;
	if (year % 100 == 0) return 365;
	if (year % 4 == 0) return 366;
	return 365;
}

int Date::ComputeDaysFromYearStart(int year, int month, int day) {
	int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (GetDaysInYear(year) == 366) days[1] = 29;

	int result = 0;
	for (int i = 0; i < month - 1; i++) result += days[i];
	result += day;

	return result;
}

void Date::NextDay(int n = 1) {
	int days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int temp = ComputeDaysFromYearStart(_year, _month, _day);
	temp += n;
	while (temp <= 0) {
		_year--;
		temp += GetDaysInYear(_year);
	}
	while (temp > GetDaysInYear(_year)) {
		temp -= GetDaysInYear(_year);
		_year++;
	}
	if (GetDaysInYear(_year) == 366) days[1] = 29;
	_month = 1;
	while (temp > days[_month - 1]) {
		temp -= days[_month - 1];
		_month++;
	}
	_day = temp;
}

bool Date::SetDate(int year, int month, int day) {
	int validDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	if (GetDaysInYear(year) == 366) validDays[1] = 29;

	if (month <= 0 || month > 12 || day <= 0 || day > validDays[month - 1]) return false;

	_year = year, _month = month, _day = day;
	return true;
}

int Date::year() const {
	return _year;
}

int Date::month() const {
	return _month;
}

int Date::day() const {
	return _day;
}

ostream& operator<<(ostream& os, const Date& c) {
	cout << c.year() << "." << c.month() << "." << c.day();
	return os;
}

istream& operator>>(istream& is, Date& c) {
	string str;
	int year, month, day;

	is >> str;
	string cpyStr = str;
	year = stoi(str.substr(0, str.find_first_of(".")));
	str = str.substr(str.find_first_of(".") + 1);
	month = stoi(str.substr(0, str.find_first_of(".")));
	str = str.substr(str.find_first_of(".") + 1);
	day = stoi(str);

	if (!c.SetDate(year, month, day)) cout << "Invalid date: " << cpyStr << endl;

	return is;
}
