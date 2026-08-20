// Q2. Write a C++ program to ask for temperature in Celsius
// and display it in Fahrenheit.
// Formula: F = 9C/5 + 32

#include <iostream>
using namespace std;

int main()
{
    float c, f;

    cout << "Enter temperature in Celsius: ";
    cin >> c;

    f = 9 * c / 5 + 32;

    cout << "Temperature in Fahrenheit = " << f;

    return 0;
}