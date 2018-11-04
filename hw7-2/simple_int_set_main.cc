#include <iostream>
#include <set>
#include <string>
#include <string.h>
#include "simple_int_set.h"

using namespace std;

int countSpace(string str) {
	int count = 0;
	for (int i = 0; i < str.length(); ++i) {
		if (str[i] == ' ') ++count;
	}
	return count;
}

bool ParseSet(const string& str, set<int>* s) {
	if (str[0] != '{' || str[str.length() - 1] != '}' || str[1] != ' ' || str[str.length() - 2] != ' ') return false;
	int space = countSpace(str);
	char* charstr = new char[str.length() + 1];
	strcpy(charstr, str.c_str());

	for (int i = 0; i < space; ++i) {
		if (i == 0) strtok(charstr, " ");
		else s->insert(atoi(strtok(NULL, " ")));
	}
	return true;
}

size_t GetOperator(const string& str) {
	auto op_pos = str.find_first_of("+");
	if (op_pos == string::npos) op_pos = str.find_first_of("*");
	if (op_pos == string::npos) {
		auto temp = str.find_first_of("-");
		while (temp != string::npos && str.at(temp + 1) != ' ')
			temp = str.find_first_of("-", temp + 1);
		op_pos = temp;
	}
	return op_pos;
}

bool InputSet(set<int>* s0, set<int>* s1, string& op) {
	s0->clear(), s1->clear();

	string line;
	getline(cin, line);

	auto op_pos = GetOperator(line);

	if (op_pos == string::npos) return false;
	else op = line.at(op_pos);

	return ParseSet(line.substr(0, op_pos - 1), s0) && ParseSet(line.substr(op_pos + 2), s1);
}

void PrintSet(set<int>& s) {
	cout << "{";
	for (auto it = s.begin(); it != s.end(); ++it) cout << " " << *it;
	cout << " }" << endl;
}

int main() {
	set<int> s0, s1;
	string op;

	while (true) {
		bool valid = InputSet(&s0, &s1, op);
		if (!valid) break;

		auto res = (op == "+") ? SetUnion(s0, s1) :
			(op == "-") ? SetDifference(s0, s1) : SetIntersection(s0, s1);
		PrintSet(res);
	}
	return 0;
}
