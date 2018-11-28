#include "world_clock.h"
#include <iostream>
#include <string>

using namespace std;

void WorldClock::Tick(int seconds = 1) {
	_second += seconds;
	while (_second < 0) _second += 86400;
	_second %= 86400;
}

bool WorldClock::SetTime(int hour, int minute, int second) {
	if (hour < 0 || hour >= 24 || minute < 0 || minute >= 60 || second < 0 || second >= 60) return false;
	_second = hour * 3600 + minute * 60 + second; 
	return true;
}

int WorldClock::hour() const { return _second / 3600; }

int WorldClock::minute() const { return _second % 3600 / 60; }

int WorldClock::second() const { return _second % 60; }

ostream& operator<<(ostream& os, const WorldClock& c) {
	os << c.hour() << ":" << c.minute() << ":" << c.second();
	return os;
}

istream& operator>>(istream& is, WorldClock& c) {
	string str;
	int hour, minute, second;

	is >> str;
	string cpyStr = str;
	hour = stoi(str.substr(0, str.find_first_of(":")));
	str = str.substr(str.find_first_of(":") + 1);
	minute = stoi(str.substr(0, str.find_first_of(":")));
	str = str.substr(str.find_first_of(":") + 1);
	second = stoi(str);

	if (!c.SetTime(hour, minute, second)) cout << "Invalid time: " << cpyStr << endl;

	return is;
}
