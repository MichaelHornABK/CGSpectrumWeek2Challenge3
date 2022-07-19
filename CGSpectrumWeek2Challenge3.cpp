#include <iostream>
using namespace std;

int main()
{
    cout << "What year would you like to check if it is a leap year? ";

    int year;
    cin >> year; 

    if (year % 4 == 0 && year % 100 != 0) {
        cout << year << " is a leap year!" << endl;
    }
    else if (year % 400 == 0) {
        cout << year << " is a leap year!" << endl;
    }
    else {
        cout << "It is not a leap year" << endl;
    }
}
