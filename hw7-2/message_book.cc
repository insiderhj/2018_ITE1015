#include <map>
#include <vector>
#include <string>
#include "message_book.h"

using namespace std;

MessageBook::MessageBook() {};

MessageBook::~MessageBook() {};

void MessageBook::AddMessage(int number, const string& message) {
	messages_.erase(number);
	messages_.insert(make_pair(number, message));
}

void MessageBook::DeleteMessage(int number) {
	auto it = messages_.find(number);
	if (it != messages_.end()) messages_.erase(it);
}

vector<int> MessageBook::GetNumbers() const {
	vector<int> result;
	for (auto it = messages_.begin(); it != messages_.end(); ++it) result.push_back(it->first);
	return result;
}

const string MessageBook::GetMessage(int number) const {
	auto it = messages_.find(number);
	if (it != messages_.end()) return it->second;
	return "";
}
