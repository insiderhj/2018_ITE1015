#pragma once

#include <iostream>

class Date {
	static int GetDaysInYear(int);
	static int ComputeDaysFromYearStart(int, int, int);
	int _year, _month, _day;
public:
	Date();
	Date(int, int, int);

	void NextDay(int);
	bool SetDate(int, int, int);

	int year() const;
	int month() const;
	int day() const;
};

std::ostream& operator<<(std::ostream&, const Date&);
std::istream& operator>>(std::istream&, Date&);
