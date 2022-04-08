#include <iostream>
#include <string>
//standard
using namespace std;

class Sandwich
{
	//you can define methods inside or outside a class
public:
	Sandwich()
	{
		cout << "constructor\n";
	}
	Sandwich(string name, float price) : name(name), price(price), isHot(false)
	{
		cout << "constructor\n";
		//this->name = name;
		//this->price = price;
	}
	
	~Sandwich()
	{
		//makes things go boom
		cout << "destructor\n";
		//cannot be called keeps objects in line; snipes and destroys anything that goes out of scope.
	}

	void Read()
	{
		cout << "enter name: ";
		cin >> name;
	}
	void Write();

private:
	string name;
	float price;
	bool isHot;
};

void Sandwich::Write()
{
	cout << "name: " << name << endl;
}

//Structure
struct Point
{
	int x;
	int y;

	Point() {}
};

int main()
{
	int mx;
	int my;
	Point point;
	point.x = 300;
	point.y = 200;

	{
		//scope
		int j = 5;
		{
			j = 10;
		}
	}
	{
		Sandwich sandwich("ham", 4.50f);
		//sandwich.Read();
		sandwich.Write();
	}

	enum class Difficulty
	{
		Easy,
		Medium,
		Hard
	};

	enum Eggs
	{
		Easy,
		Scrambled
	};
	int en = Easy;
	Difficulty d = Difficulty :: Easy;
	if (d == Difficulty :: Easy) cout << "Easy\n";
	
	union Data
	{
		int i;
		float f;
		bool b;
	};

	Data data;
	data.i = 10;
	data.f = 23.5f;
	data.b = true;

	cout << &data.i << endl;
	//cout << &data.f << endl;
	cout << data.i << endl;
}

