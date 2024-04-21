#include <iostream>
#include <cstdlib> 

using namespace std;

int main() {
   
   //giving a seed using time
    srand(static_cast<unsigned int>(time(nullptr)));

    // Generate a random number between 0 and 11
    int daysUntilExpire = rand() % 12; // generates a number between 0 and 11

    cout << "Random number between 0 and 11: " << daysUntilExpire << endl;

    if(daysUntilExpire <= 10){
    
            if(daysUntilExpire == 1){
                cout << "Your subscription expires within a day. \nRenew Now and save 20%!\n" <<endl;
            }
            
            else if(daysUntilExpire == 0){
                cout << "Your subscription has expired.\n" <<endl;
            }

            else if(daysUntilExpire <= 5){
                cout << "Your subscription expires in " << daysUntilExpire << " days. \nRenew Now and save 10%!\n" <<endl;
            }

            else
                cout << "Your subscription will expire soon. Renew Now!\n" <<endl;
    }

    else
        cout << "You have an active subscription \n" << endl << endl;  

    return 0;
}
