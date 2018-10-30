#ifndef __INTEGER_SET__
#define __INTEGER_SET__

#include <vector>

class IntegerSet {
	std::vector<int> numbers_;
public:
	IntegerSet();
	~IntegerSet();

	void AddNumber(int);
	void DeleteNumber(int);

	int GetItem(int) const;
	std::vector<int> GetAll() const;
};

#endif
