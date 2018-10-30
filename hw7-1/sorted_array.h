#ifndef __SORTED_ARRAY__
#define __SORTED_ARRAY__

#include <vector>
#include <string>

class SortedArray {
	std::vector<int> numbers_;
public:
	SortedArray();
	~SortedArray();

	void AddNumber(int);

	std::vector<int> GetSortedAscending() const;
	std::vector<int> GetSortedDescending() const;
	int GetMax() const;
	int GetMin() const;
};

bool check_number(std::string);

#endif
