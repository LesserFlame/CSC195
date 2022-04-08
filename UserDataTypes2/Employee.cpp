#include "Employee.h"
#include <iostream>
using namespace std;

const float Employee::tax = 0.01f;
void Employee::Read()
{
	cout << "Enter name: ";
	cin >> name;
	cout << "Enter age: ";
	cin >> age;
	cout << "Enter zipcode: ";
	cin >> zipcode;
	cout << "Enter wage: ";
	cin >> wage;
	cout << "Enter hours worked per week: ";
	cin >> hoursworked;
}
void Employee::Write()
{
	cout << "Name: " << name << endl;
	cout << "Age: " << age << endl;
	cout << "Zipcode: " << zipcode << endl;
	cout << "Wage: " << wage << endl;
	cout << "Hours: " << hoursworked << endl;

	float gross = hoursworked * wage;
	float net = gross - (gross * tax);

	cout << "Gross: " << gross << endl;
	cout << "Net: " << net << endl;
}