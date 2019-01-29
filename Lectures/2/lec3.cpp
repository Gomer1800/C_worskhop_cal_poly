#include <iostream>
#include <string>
using namespace std;

struct contact {
    string firstname;
    string lastname;
    string phone;
};

void listcontacts(struct contact* contacts){
    for(int i = 0; i < 10; i++){
        cout << i << ": " << contacts[i].firstname << " " << contacts[i].lastname << endl;
    }
}

void entercontact(struct contact* c){
    cout << "Firstname: ";
    cin >> c->firstname;
    cout << "Lastname: ";
    cin >> c->lastname;
    cout << "Phone #: ";
    cin >> c->phone;
    cin;
}

void readcontact(struct contact* c){
    cout << c->firstname << " " << c->lastname << endl;
    cout << "Phone: " << c->phone << endl;
}

int main(){

    struct contact contacts[10];

    int i, j;

    while(1){

        cout << "\n\n\nMenu \n1. List contacts\n2. Enter contact\n3. Read contact\n>";
        cin >> i;

        if(i == 1){
            listcontacts(contacts);
        }
        else if(i == 2){
            cout << "Which (0-9)?\n>";
            cin >> j;
            entercontact(&contacts[j]);
        }
        else if(i == 3){
            cout << "Which (0-9)?\n>";
            cin >> j;
            readcontact(&contacts[j]);
        }
        else break;

    }

    return 0;
}

