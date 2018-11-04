#ifndef __MESSAGE_BOOK__
#define __MESSAGE_BOOK__

#include <map>
#include <vector>
#include <string>

class MessageBook {
	std::map<int, std::string> messages_;
public:
	MessageBook();
	~MessageBook();
	void AddMessage(int, const std::string&);
	void DeleteMessage(int);
	std::vector<int> GetNumbers() const;
	const std::string GetMessage(int) const;
};

#endif
