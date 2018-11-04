#include <set>
#include <string>
#include "simple_int_set.h"

using namespace std;

set<int> SetIntersection(const set<int>& set0, const set<int>& set1) {
	set<int> result;
	for (set<int>::iterator it = set0.begin(); it != set0.end(); it++) {
		if (set1.find(*it) != set1.end()) result.insert(*it);
	}

	return result;
}

set<int> SetUnion(const set<int>& set0, const set<int>& set1) {
	set<int> result = set0;
	for (set<int>::iterator it = set1.begin(); it != set1.end(); it++) {
		result.insert(*it);
	}

	return result;
}

set<int> SetDifference(const set<int>& set0, const set<int>& set1) {
	set<int> result = set0;
	for (set<int>::iterator it = set1.begin(); it != set1.end(); it++) {
		result.erase(*it);
	}

	return result;
}
