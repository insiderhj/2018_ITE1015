#include <string>
#include <stdlib.h>
#include "reply_admin.h"

#define NUM_OF_CHAT 10

using namespace std;

ReplyAdmin::ReplyAdmin() {
	chats = new string[NUM_OF_CHAT];
	chatCount = -1;
}

ReplyAdmin::~ReplyAdmin() {
	delete[] chats;
}

int ReplyAdmin::getChatCount() {
	return chatCount;
}

string ReplyAdmin::showChat(int idx) {
	return chats[idx];
}

bool ReplyAdmin::addChat(string _chat) {
	if (chatCount >= 9) return false;
	chatCount++;
	chats[chatCount] = _chat;
	return true;
}

bool ReplyAdmin::removeChat(int _index) {
	if (_index > chatCount) return false;
	for (int i = _index; i < chatCount; i++) chats[i] = chats[i + 1];
	chatCount--;
	return true;
}

bool ReplyAdmin::removeChat(int *_indices, int _count) {
	bool result = false;
	int removed = 0;
	for (int i = 0; i < _count; i++) {
		if (removeChat(_indices[i] - removed)) {
			removed++;
			result = true;
		}
	}
	return result;
}

bool ReplyAdmin::removeChat(int _start, int _end) {
	bool result = false;
	for (int i = _start; i <= _end; i++) {
		if (removeChat(_start)) result = true;
	}
	return result;
}

string* split(string& str, const string& delim) {
	string* string_list = new string[10];
	for (int i = 0; i < 10; ++i) string_list[i] = "";

	size_t prev = 0, pos = 0;
	int idx = 0;
	do {
		pos = str.find_first_of(delim, prev + 1);
		string_list[idx] = str.substr(prev, pos - prev);
		prev = pos + 1;
		++idx;
	} while (pos != string::npos);

	return string_list;
}
