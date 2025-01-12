/* Cyrus Jayson A. Pedere
   Bscpe 1-1 Programming Logic and Design
   Module IV & V - Programming Exercise

   **** 1. Body Mass Index Program Enhancement ****
        C++ LANGUAGE
 */


#include <iostream>
using namespace std;

int main()
{
    double weight, height, bmi;
    char choice;

    do {
        cout << "What is your weight in pounds? ";
        cin >> weight;

        cout << "What is your height in inches? ";
        cin >> height;

        bmi = (weight * 703) / (height * height);

        cout << "Your BMI is: " << bmi << endl;
        if (bmi < 18.5) {
            cout << "You are underweight." << endl;
        } else if (bmi >= 18.5 && bmi <= 25) {
            cout << "Your weight is optimal." << endl;
        } else {
            cout << "You are overweight." << endl;
        }

        cout << "Do you want to calculate your BMI again? [y/n]: ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    
    cout << "Thank you for using the BMI calculator!" << endl;

    return 0;
}
