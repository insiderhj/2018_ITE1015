#include <iostream>
#include "simple_account.h"

using namespace std;

int main()
{
	char job;
	int myid, toid, money;

	Editor editor;

	while (true) {
		cout << "Job?" << endl;
		cin >> job;
		if (job == 'N') {
			if (editor.get_count() < 9) {
				editor.make_acc();
				cout << "Account for user " << editor.get_count() << " registered" << endl;
				cout << "Balance of user " << editor.get_count() << ": " << editor.check(editor.get_count()) << endl;
			}
		}
		else if (job == 'D') {
			cin >> myid >> money;
			if (editor.get_count() >= myid) {
				if (editor.deposit(myid, money)) cout << "Success: Deposit to user " << myid << " " << money << endl;
				else cout << "Failure: Deposit to user " << myid << " " << money << endl;
				cout << "Balance of user " << myid << ": " << editor.check(myid) << endl;
			} else cout << "Account does not exist" << endl;
		}

		else if (job == 'W') {
			cin >> myid >> money;
			if (editor.get_count() >= myid) {
				if (editor.withdraw(myid, money)) cout << "Success: Withdraw from user " << myid << " " << money << endl;
				else cout << "Failure: Deposit to user " << myid << " " << money << endl;
				cout << "Balance of user " << myid << ": " << editor.check(myid) << endl;
			} else cout << "Account does not exist" << endl;
		}
		else if (job == 'T') {
			cin >> myid >> toid >> money;
			if (editor.get_count() >= myid && editor.get_count() >= toid) {
				if (editor.withdraw(myid, money)) {
					if (editor.deposit(toid, money)) cout << "Success: Transfer from user " << myid << " to user " << toid << " " << money << endl;
					else {
						editor.deposit(myid, money);
						cout << "Failure: Transfer from user " << myid << " to user " << toid << " " << money << endl;
					}
				} else cout << "Failure: Transfer from user " << myid << " to user " << toid << " " << money << endl;
				cout << "Balance of user " << myid << ": " << editor.check(myid) << endl;
				cout << "Balance of user " << toid << ": " << editor.check(toid) << endl;
			} else cout << "Account does not exist" << endl;
		}
		else return 0;
	}
	return 0;
}
