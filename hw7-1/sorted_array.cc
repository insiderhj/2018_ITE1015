#include <vector>
#include <algorithm>
#include <functional>
#include <string>
#include "sorted_array.h"

using namespace std;

SortedArray::SortedArray() { };

SortedArray::~SortedArray() { };

void SortedArray::AddNumber(int num) {
	numbers_.push_back(num);
}

vector<int> SortedArray::GetSortedAscending() const {
	vector<int> result = numbers_;
	sort(result.begin(), result.end());
	return result;
}

vector<int> SortedArray::GetSortedDescending() const {
	vector<int> result = numbers_;
	sort(result.begin(), result.end(), greater<int>());
	return result;
}

int SortedArray::GetMax() const {
	return *max_element(numbers_.begin(), numbers_.end());
}

int SortedArray::GetMin() const {
	return *min_element(numbers_.begin(), numbers_.end());
}

bool check_number(string str) {
	for (int i = 0; i < str.length(); i++) {
		if (!(str[i] >= '0' && str[i] <= '9' || str[i] == '-')) return false;
	}
	return true;
}
