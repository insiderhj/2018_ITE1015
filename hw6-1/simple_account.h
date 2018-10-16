#ifndef _SIMPLE_ACCOUNT_
#define _SIMPLE_ACCOUNT_

class Account {
private:
	int id;
	int money;
public:
	Account(int);
	int get_id();
	int get_money();
	void set_money(int);
};


class Editor {
private:
	Account** acc;
	int count;
public:
	Editor();
	int get_count();
	bool make_acc();
	int check(int);
	bool deposit(int, int);
	bool withdraw(int, int);
};

#endif
