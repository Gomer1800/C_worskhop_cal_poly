/*
Author: Graydon Wilson
Lecture 2: Arrays, Pointers, Structs
*/
#include <iostream>
#include <string>
using namespace std; // In the future we will not use this, opting instead for scope resolution operator (::)

struct contact { // Looks like an object right?
	string firstname;
	string lastname;
	string phone;
};

void editphone(struct contact* c) {
	cout << "Phone: ";
	cin >> c->phone;
}

void editcontact(struct contact* c) { // Input parameter is a Pointer to a struct contact!
	cout << "First name: ";
	cin >> c->firstname; // ->, we use this operator because c is a pointer, not a copy of the object!
	cout << c->firstname << " Last name: ";
	cin >> c->lastname;
}

struct contact editcontact2() { // Function that returns a new struct contact
	struct contact c;
	cout << "First name: ";
	string fn;
	cin >> fn;
	c.firstname = fn;
	cout << "Last name: ";
	cin >> c.lastname;
	return c;
}

void readcontacts(struct contact* p_contact) { // Input parameter is a Pointer to a struct contact!
	for (int i = 0; i < 10; i++) {
		cout << i << ": " << p_contact[i].firstname << " " << p_contact[i].lastname << endl; 
		// we can use dot operator because p_contact[i] dereferences p_contact. p_contact[i] is the ith element itself! hence dot operator used!
	}
}

int main() {

	struct contact c[10]; // VERY IMPORTANT, the name of an array is treated as a pointer to the first element of said array!
	
	int i;

	while (1) {

		cout << "Menu" << endl << "1. Read contacts" << endl << "2. Edit contact" << endl
			<< "3. Edit phone" << endl;
		cin >> i;

		if (i == 1) {
			readcontacts(c);
		}
		else if (i == 2) {
			cout << "Which? ";
			int j;
			cin >> j;
			editcontact( &(c[j]) );
		}
		else if (i == 3) {
			cout << "Which? ";
			int j;
			cin >> j;
			editphone(&(c[j]));
		}
		else {
			break;
		}

	}

	return 0;
}