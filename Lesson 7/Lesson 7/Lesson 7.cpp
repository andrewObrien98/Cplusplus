#include <iostream>
using namespace std;

void main()
{
    //BMI calculator
    float weight, height, bmi;
    cout << "Enter your weight (kg): ";
    cin >> weight;
    cout << "\n Enter your height (meters): ";
    cin >> height;
    bmi = weight / (height * height);
    cout << "" << endl;
    if (bmi < 18.5) {
        cout << "you are under weight" << endl;
    }
    else if (bmi < 25) {
        cout << "you are normal weight" << endl;
    }
    else {
        cout << "you are overweight" << endl;
    }
    cout << "BMI: " << bmi << endl;
    system("pause>0");
}


