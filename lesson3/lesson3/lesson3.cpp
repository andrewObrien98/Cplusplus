#include <iostream>
using namespace std;

int main()
{
    //ascii table and how to use
    cout << (int)'a' << endl;
    cout << int('a') << endl;
    cout << int('A') << endl;
    cout << char(65) << endl;

    char c1, c2, c3, c4, c5;
    cout << "Enter 5 letters: ";
    cin >> c1 >> c2 >> c3 >> c4 >> c5;
    cout << "ASCII message: " << int(c1) << " "<<int(c2) << " "<<int(c3) << " "<<int(c4) << " "<<int(c5) << " \n";
    cout << "syphered message " << char(int(c1)) << " " << char(int(c2)) << " " << char(int(c3)) << " " << char(int(c4)) << " " << char(int(c5)) << " ";
    system("pause>0");
}
