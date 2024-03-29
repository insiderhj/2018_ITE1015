#include <stdlib.h>
#include <string>
#include <iostream>
#include "reply_admin.h"

using namespace std;

int main()
{
	ReplyAdmin admin;
	string str;
	string work;
	string arguement;
	string* comma = new string[10];
	string* hiphen = new string[10];
	int* indices = new int[10];
	int count;

	while (true) {
		getline(cin, str);
		if (str[0] == '#') {
			if (str.substr(1, 4) == "quit") break;
			else if (str.substr(1, 6) != "remove") {
				cout << "Error!" << endl;
				continue;
			}
			arguement = split(str, " ")[1];
			comma = split(arguement, ",");
			hiphen = split(arguement, "-");
			count = 0;

			for (int i = 0; i < 10; i++) {
				if (comma[i] == "") break;
				indices[i] = atoi(comma[i].c_str());
				count++;
			}
			if (hiphen[1] != "") {
				if (!admin.removeChat(atoi(hiphen[0].c_str()), atoi(hiphen[1].c_str()))) {
					cout << "Error!" << endl;
					continue;
				}
			} else {
				if (!admin.removeChat(indices, count)) {
					cout << "Error!" << endl;
					continue;
				}
			}
		} else {
			if (!admin.addChat(str)) {
				cout << "Error!" << endl;
				continue;
			}
		}
		
		for (int i = 0; i <= admin.getChatCount(); i++) {
			cout << i << " " << admin.showChat(i) << endl;
		}
	}
	return 0;
}

