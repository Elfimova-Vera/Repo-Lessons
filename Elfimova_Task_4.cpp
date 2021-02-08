#include <iostream>
using namespace std;

int main()
{
   

    // Задание  1

    int Val1;
    cout << "write a number" << endl;
    cin >> Val1;
    if ((Val1 >= 10) && (Val1 <= 20)) {

        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }



    // Задание 2

    int Val2;
    cin >> Val2;
    bool isPrime=true;

    for (int i = 2; i <= (sqrt(abs(Val2))); i++) {
        if (Val2 % i == 0) {
            isPrime = false;
            break;
        }
    }
    if (isPrime) {
        cout << "This is a prime number" << endl;
    }
    else {
        cout << "This is not a prime number" << endl;
    }


    // Задание  3
    //решить можно двумя способами
    //1
    const int a = 3;
    const int b = 7;
    bool Answer_3 = ((((a == 10))|| (b == 10)) || ((a+b)==10));
    cout << boolalpha << Answer_3<<endl;

    //2
    if ((((a == 3)) || (b == 10)) )
    {
        cout << "true" << endl;
    }
     else if (((a + b) == 10))
    {
        cout << "true" << endl;
    }
     else
    {
        cout << "false" << endl;
    }

    // Задание 4

    unsigned int year;
    cout << " Write any year for test: " << endl;
    cin >> year;

    if (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
        cout << "Leap year" << endl;
    }
    else
    {
        cout << "Not a leap year"<< endl;
    }
    return 0;
}
