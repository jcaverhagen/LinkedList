#include <iostream>
#include <cstring>

using namespace std;

class Person {
    public :
        Person* nextPerson = nullptr;
        string name;
};

int main()
{
    Person* firstPerson = new Person;

    cout << "Enter new persons name: ";
    cin >> firstPerson->name;

    while(true) {

        string inputData;
        cout << "Enter new persons name: ";
        cin >> inputData;

        if(inputData == "Quit") {
            break;
        }

        Person* p = new Person;
        p->name = inputData;

        /// adding to beginning of list
        p->nextPerson = firstPerson;
        firstPerson = p;
    }

    ///loop through all names
    Person* person = firstPerson;
    int counter = 1;
    while(person != nullptr) {
        cout << "Name " << counter << ": " << person->name << endl;
        person = person->nextPerson;
        counter++;
    }

    return 0;
}
