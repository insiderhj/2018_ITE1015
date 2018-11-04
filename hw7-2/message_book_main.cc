#include <iostream>
#include <vector>
#include "message_book.h"

using namespace std;

int main() {
	MessageBook msg_book;

	string arg;
	string str;
	int num, cnt;
	bool hasInputNum, hasInputStr;

	while (true) {
		cnt = 0;
		hasInputNum = false;
		hasInputStr = false;
		do {
			if (cnt == 0) cin >> arg;
			else if (cnt == 1) {
				cin >> num;
				hasInputNum = true;
			}
			else {
				getline(cin, str);
				hasInputStr = true;
				break;
			}
			cnt++;
		} while (getc(stdin) == ' ');

		if (arg == "add") {
			if (hasInputNum && hasInputStr) msg_book.AddMessage(num, str);
		} else if (arg == "delete") {
			if (hasInputNum) msg_book.DeleteMessage(num);
		} else if (arg == "print") {
			if (hasInputNum) cout << msg_book.GetMessage(num) << endl;
		} else if (arg == "list") {
			vector<int> vec = msg_book.GetNumbers();
			for (auto it = vec.begin(); it != vec.end(); ++it) {
				cout << *it << ": " << msg_book.GetMessage(*it) << endl;
			}
		} else break;
	}
}
