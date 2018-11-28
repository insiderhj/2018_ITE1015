#pragma once

#include <iostream>

class WorldClock {
	int _hour, _minute, _second;
public:
	WorldClock() : _hour(0), _minute(0), _second(0) {}
	void Tick(int);
	bool SetTime(int, int, int);

	int hour() const;
	int minute() const;
	int second() const;
};

std::ostream& operator<<(std::ostream&, const WorldClock&);
std::istream& operator>>(std::istream&, WorldClock&);
