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
				myid = editor.get_count();
				cout << "Account for user " << myid << " registered" << endl;
			} else continue;
		}
		else if (job == 'D') {
			cin >> myid >> money;
			if (editor.get_count() >= myid) {
				if (editor.deposit(myid, money)) cout << "Success: ";
				else cout << "Failure: ";
				cout << "Deposit to user " << myid << " " << money << endl;
			} else cout << "Account does not exist" << endl;
		}

		else if (job == 'W') {
			cin >> myid >> money;
			if (editor.get_count() >= myid) {
				if (editor.withdraw(myid, money)) cout << "Success: ";
				else cout << "Failure: ";
				cout << "Deposit to user " << myid << " " << money << endl;
			} else cout << "Account does not exist" << endl;
		}
		else if (job == 'T') {
			cin >> myid >> toid >> money;
			if (editor.get_count() >= myid && editor.get_count() >= toid) {
				if (editor.withdraw(myid, money)) {
					if (editor.deposit(toid, money)) cout << "Success: ";
					else {
						editor.deposit(myid, money);
						cout << "Failure: ";
					}
				} else cout << "Failure: ";
				cout << "Transfer from user " << myid << " to user " << toid << " " << money << endl;
				cout << "Balance of user " << toid << ": " << editor.check(toid) << endl;
			} else cout << "Account does not exist" << endl;
		}
		else return 0;
		cout << "Balance of user " << myid << ": " << editor.check(myid) << endl;
	}
	return 0;
}
