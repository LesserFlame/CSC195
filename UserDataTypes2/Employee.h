#pragma once
#include <string>
using namespace std;
class Employee
{
public:
	void Read();
	void Write();
private:
	string name;
	int age;
	int zipcode;
	float wage;
	int hoursworked;

	static const float tax;
};