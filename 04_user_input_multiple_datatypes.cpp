#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    char gender;
    int age;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your gender (M/F): ";
    cin >> gender;

    cout << "Enter your age: ";
    cin >> age;

    cout << "My Name is " << name << endl;
    cout << "My Gender is " << gender << endl;
    cout << "My Age is " << age << endl;

    return 0;
}
