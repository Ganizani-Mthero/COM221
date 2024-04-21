#include <iostream>
#include <limits> // for numeric_limits
using namespace std;

int main() {
    int userInput;

    // Prompt the user for an integer value between 5 and 10
    cout << "Enter an integer value between 5 and 10 \n";
    do {
        if (!(cin >> userInput)) {
            cin.clear(); // clear error flags
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard input buffer
            cout << "Sorry, you entered an invalid number, please try again. \n";
        } else if (userInput < 5 || userInput > 10) {
            cout << "You entered " << userInput << ". Please enter a number between 5 and 10.\n";
        }
    } while (userInput < 5 || userInput > 10); // repeat until valid input is received

    cout << "Your input value (" << userInput << ") has been accepted.\n" << endl;

    return 0;
}
