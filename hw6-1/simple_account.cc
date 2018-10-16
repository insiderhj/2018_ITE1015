#include "simple_account.h"

Editor::Editor() {
	acc = new Account*[10];
	count = -1;
}

int Editor::get_count() {
	return count;
}

bool Editor::make_acc() {
	if (count >= 9) return false;
	count++;
	acc[count] = new Account(count);
	return true;
}

int Editor::check(int accid) {
	return acc[accid]->get_money();
}

bool Editor::deposit(int accid, int money) {
	if (check(accid) + money > 1000000) return false;
	acc[accid]->set_money(acc[accid]->get_money() + money);
	return true;
}

bool Editor::withdraw(int accid, int money) {
	if (check(accid) - money < 0) return false;
	acc[accid]->set_money(acc[accid]->get_money() - money);
	return true;
}


Account::Account(int n) {
	id = n;
	money = 0;
}

int Account::get_money() {
	return money;
}

void Account::set_money(int n) {
	money = n;
}
