// lesson 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    float a, b, c;
    cout << "a, b, c: ";
    cin >> a >> b >> c;

    if (a == b && b == c) {
        cout << "equilateral triangle";
    }
    else {
        if (a != b && a != c && b != c) {
            cout << "Scalene triangle";
        }
        else {
            cout << "Isosceles triangle";
        }
    }
}


