#include <iostream>
#include "Employee.h"

using namespace std;

int main()
{
	Employee employees[5];
	cout << "How many employees? (Max 5): ";
	int numEmployees;
	cin >> numEmployees;
	for (int i = 0; i < numEmployees; i++) 
	{
		employees[i].Read();
		cout << "Employee " << (i+1) << ":\n";
		employees[i].Write();
	}
}
