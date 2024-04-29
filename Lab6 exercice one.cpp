#include <iostream>
#include <string>

using namespace std;

int main() {
    
    int* dynamicValueInt = new int;
    string* dynamicString = new string;

    cout << "Enter an interger Value: ";
    cin >> *dynamicValueInt;

    cout << "Enter a string value : ";
    cin.ignore(); 
    getline(cin, *dynamicString);

    
    cout << "Value of dynamically allocated interger is: " << *dynamicValueInt << endl; 
    cout << "Value of the  dynamically allocated string  is: " << *dynamicString << endl;

    
    delete dynamicValueInt;
    delete dynamicString;

    return 0;
}
