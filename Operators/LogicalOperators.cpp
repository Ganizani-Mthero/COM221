#include <iostream>
using namespace std;

int main (){
    int a = 21;
    int b = 10;
    int c ;

    if (a && b ){
        cout<< "condition is true"<< endl;
    }  


    if (a || b ){
        cout<< "Line 2 - condition is true "<< endl;
    }  
    
     a = 0;
     b = 10;

     if (a && b ){
        cout<< "Line 3 - a condition is true"<< endl;
    }  
      else {
         cout<< "Line 4 - a condition is not true"<< endl;
      }

    if (!(a && b )){
        cout<< "Line 5 - condition is true"<< endl;
    }  

    return 0;
}

