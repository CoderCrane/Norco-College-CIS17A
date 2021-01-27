#include "pch.h"
#include <iostream>
using namespace std;

struct Customer {

};

int main()
{
	const int CHOICE_ONE = 1;
	const int CHOICE_TWO = 2;
	const int CHOICE_THREE = 3;
	int choice = 0;
	//int num;

	int id;
	int customerIds = 0;
	int removerId;
	char y = 0;
	


	bool menuLoop = true;

	do {
		choice = 0;
		cout << "Welcome to Circuit City!\n"
			<< "Please select from the following options: \n"
			<< "1. Add a customer.  " << "Current customer ID's: " << customerIds << "\n"
			<< "2. Remove a customer by ID\n"
			<< "3. Exit\n";
		cin >> choice;

		switch (choice) {

		case CHOICE_ONE:
			cout << "Enter new customer ID: ";
			cin >> id;
			if (id <= 0) {
				cout << "An ID cannot be zero.\n";
			}
			else {
				customerIds++;
			}
			break;

		case CHOICE_TWO:
			cout << "To remove a customer ID, press 0.\n";
			cin >> removerId;
			if (removerId != 0 ) {
				cout << "Please select 0.\n";
			}
			else {
				customerIds--;
			}
			break;

		case CHOICE_THREE:
			cout << "Program ending.\n";
			break;

		}
		cin.clear();
		cin.ignore();
	} while (choice != 3);
		 
}
