#ifndef _REPLY_ADMIN_
#define _REPLY_ADMIN_

#include <string>

class ReplyAdmin {
private:
	std::string* chats;
	int chatCount;

public:
	ReplyAdmin();
	~ReplyAdmin();
	int getChatCount();
	std::string showChat(int);
	bool addChat(std::string);
	bool removeChat(int);
	bool removeChat(int*, int);
	bool removeChat(int, int);
};

std::string* split(std::string&, const std::string&);

#endif
