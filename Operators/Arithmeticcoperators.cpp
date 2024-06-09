#include <iostream>
using namespace std;

int main (){
    int a = 21;
    int b = 10;
    int c ;

    c = a+b;
    cout << "line 1 - Vlaue is : " << c << endl;

    c = a - b;
    cout << "line 2 - Vlaue is : " << c << endl;

    c = a * b;
    cout << "line 3 - Vlaue is : " << c << endl;

    c = a / b;
    cout << "line 4 - Vlaue is : " << c << endl;

    c = a % b;
    cout << "line 5 - Vlaue is : " << c << endl;

    c = a++;
    cout << "line 6 - Vlaue is : " << c << endl;

    c = a--;
    cout << "line 7- Vlaue is : " << c << endl;

    return 0;
}