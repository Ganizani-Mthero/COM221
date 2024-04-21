#include <iostream>
#include <cstdlib> 
using namespace std;

int main() {
   
    srand(static_cast<unsigned int>(time(nullptr)));

    // Generate a random number between 0 and 11
    int daysUntilExpire = rand() % 12; // generates a number between 0 and 11

    cout << "Random number between 0 and 11: " << daysUntilExpire << endl;

    switch (daysUntilExpire) {
        case 0:
            cout << "Your subscription has expired.\n" << endl;
            break;
        case 1:
            cout << "Your subscription expires within a day. \nRenew Now and save 20%!\n" << endl;
            break;
        case 2:
        case 3:
        case 4:
        case 5:
            cout << "Your subscription expires in " << daysUntilExpire << " days. \nRenew Now and save 10%!\n" << endl;
            break;
        default:
            if (daysUntilExpire <= 10) {
                cout << "Your subscription will expire soon. Renew Now!\n" << endl;
            } else {
                cout << "You have an active subscription \n" << endl << endl;
            }
            break;
    }

    return 0;
}
