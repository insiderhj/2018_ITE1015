#include "clock_time.h"

class Clock {
protected:
	ClockTime _clockTime;
	double _driftPerSecond;
	double _totalDrift;
public:
	Clock(int, int, int, double);
	void reset();
	void tick();
	virtual void displayTime() = 0;
};

class NaturalClock : public Clock {
public:
	NaturalClock(int hour, int minute, int second, double driftPerSecond) : Clock(hour, minute, second, driftPerSecond) {}
	virtual void displayTime() = 0;
};

class MechanicalClock : public Clock {
public:
	MechanicalClock(int hour, int minute, int second, double driftPerSecond) : Clock(hour, minute, second, driftPerSecond) {}
	virtual void displayTime() = 0;
};

class DigitalClock : public Clock {
public:
	DigitalClock(int hour, int minute, int second, double driftPerSecond) : Clock(hour, minute, second, driftPerSecond) {}
	virtual void displayTime() = 0;
};

class QuantumClock : public Clock {
public:
	QuantumClock(int hour, int minute, int second, double driftPerSecond) : Clock(hour, minute, second, driftPerSecond) {}
	virtual void displayTime() = 0;
};

class SundialClock : public NaturalClock {
public:
	SundialClock(int hour, int minute, int second) : NaturalClock(hour, minute, second, 0) {}
	void displayTime();
};

class CuckooClock : public MechanicalClock {
public:
	CuckooClock(int hour, int minute, int second) : MechanicalClock(hour, minute, second, 0.000694444) {}
	void displayTime();
};

class GrandFatherClock : public MechanicalClock {
public:
	GrandFatherClock(int hour, int minute, int second) : MechanicalClock(hour, minute, second, 0.000347222) {}
	void displayTime();
};

class WristClock : public DigitalClock {
public:
	WristClock(int hour, int minute, int second) : DigitalClock(hour, minute, second, 0.000034722) {}
	void displayTime();
};

class AtomicClock : public QuantumClock {
public:
	AtomicClock(int hour, int minute, int second) : QuantumClock(hour, minute, second, 0) {}
	void displayTime();
};
