// DataTypes.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

//makes it so you don't have to typr std:: to access something in the standard library
using namespace std;

namespace skittlz
{
    int i = 10;
    void f() {}
}

void f() {}
int main()
{
    string name;
    char initial;
    int age;
    bool isAdult;
    int zipcode;
    float wage;
    int daysWorked;
    int hoursWorkedPerDay[7];

    const float tax = 0.085;

    cout << "Enter thy first name: ";
    cin >> name;

    cout << "Enter thy last initial: ";
    cin >> initial;

    cout << "Enter thy age: ";
    cin >> age;

    cout << "Enter thy zip code: ";
    cin >> zipcode;

    cout << "Enter thy wage: ";
    cin >> wage;

    cout << "Enter thy days worked: ";
    cin >> daysWorked;


    if (age >= 18)
    {
        isAdult = true;
    }
    else
    {
        isAdult = false;
    }

    int totalHrs = 0;

    for (int i = 0; i < daysWorked; i++) {
        cout << "Enter thy hours for day " << i + 1 << ": ";
        cin >> hoursWorkedPerDay[i];
        totalHrs += hoursWorkedPerDay[i];
    }
    float grossInc = totalHrs * wage;
    float netInc = (grossInc * tax) + grossInc;

    cout << "Gross Income: $" << grossInc << "\nNet Income: $" << netInc;
}