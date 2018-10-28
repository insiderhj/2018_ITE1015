#include <string>
#include <stdlib.h>
#include "minimal_fighter.h"

using namespace std;

MinimalFighter::MinimalFighter() {
	mHp = 0;
	mPower = 0;
	mStatus = Invalid;
}

MinimalFighter::MinimalFighter(int _hp, int _power) {
	mHp = _hp;
	mPower = _power;
	if (mHp == 0) mStatus = Dead;
	else mStatus = Alive;
}

MinimalFighter::~MinimalFighter() {};

int MinimalFighter::hp() const {
	return mHp;
}

int MinimalFighter::power() const {
	return mPower;
}

FighterStatus MinimalFighter::status() const {
	return mStatus;
}

void MinimalFighter::setHp(int _hp) {
	if (_hp <= 0) {
		mHp = 0;
	} else mHp = _hp;
}

void MinimalFighter::setStatus(FighterStatus _status) {
	mStatus = _status;
}

void MinimalFighter::hit(MinimalFighter* _enemy) {
	if (mStatus == Alive) _enemy->setHp(_enemy->hp() - mPower);
	if (_enemy->status() == Alive) setHp(mHp - _enemy->power());
	if (mHp == 0) mStatus = Dead;
	if (_enemy->hp() == 0) _enemy->setStatus(Dead);
}

void MinimalFighter::attack(MinimalFighter* _target) {
	if (mStatus == Alive) _target->setHp(_target->hp() - mPower);
	if (_target->hp() == 0) _target->setStatus(Dead);
	mPower = 0;
}

void MinimalFighter::fight(MinimalFighter* _enemy) {
	while (mStatus != Dead && _enemy->status() != Dead) hit(_enemy);
}

string* split(string& str, const string& delim) {
	string* string_list = new string[10];
	for (int i = 0; i < 10; i++) {
		string_list[i] = "";
	}

	size_t prev = 0, pos = 0;
	int idx = 0;
	do {
		pos = str.find_first_of(delim, prev + 1);
		string_list[idx] = str.substr(prev, pos - prev);
		prev = pos + 1;
		idx++;
	} while (pos != string::npos);

	return string_list;
}

bool check_number(string str) {
	for (int i = 0; i < str.length(); i++) {
		if (!(str[i] >= '0' && str[i] <= '9')) return false;
	}
	return true;
}

