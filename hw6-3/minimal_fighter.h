#ifndef _MINIMAL_FIGHTER_
#define _MINIMAL_FIGHTER_

enum FighterStatus {Invalid, Alive, Dead};

class MinimalFighter {
private:
	int mHp;
	int mPower;
	FighterStatus mStatus;
public:
	MinimalFighter();
	MinimalFighter(int, int);
	~MinimalFighter();
	int hp() const;
	int power() const;
	FighterStatus status() const;
	void setHp(int);
	void setStatus(FighterStatus);
	void hit(MinimalFighter*);
	void attack(MinimalFighter*);
	void fight(MinimalFighter*);
};

std::string* split(std::string&, const std::string&);
bool check_number(std::string);

#endif
