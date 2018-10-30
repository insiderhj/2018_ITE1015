#include <vector>
#include <algorithm>
#include "integer_set.h"

using namespace std;

IntegerSet::IntegerSet() {}

IntegerSet::~IntegerSet() {}

void IntegerSet::AddNumber(int num) {
	for (int i = 0; i < numbers_.size(); i++) {
		if (numbers_[i] == num) return;
	}
	numbers_.push_back(num);
	sort(numbers_.begin(), numbers_.end());
}

void IntegerSet::DeleteNumber(int num) {
	for (vector<int>::iterator it = numbers_.begin(); it != numbers_.end(); it++) {
		if (*it == num) {
			numbers_.erase(it);
			return;
		}
	}
}

int IntegerSet::GetItem(int pos) const {
	if (pos >= numbers_.size()) return -1;
	return numbers_.at(pos);
}

vector<int> IntegerSet::GetAll() const {
	return numbers_;
}
