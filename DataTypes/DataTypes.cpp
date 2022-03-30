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
    skittlz::f();
    int i = -34;
    float f = 23.12;
    bool b = 12;
    string name;

    //const makes it so that the variable cannot be changed, it's constant
    const float TAX = 0.085;
    char initial = 'J';

    //brakets always come after var name
    int ages[4]; // [xx,xx,xx,xx] xx xx xx xx xx xx
    ages[0] = 24;
    ages[1] = 10;
    ages[32] = 56;

    cin >> name;
    cout << name;

    if (i) cout << "true\n";
    cout << skittlz::i << endl;

    cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
