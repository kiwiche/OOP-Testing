#include <bits/stdc++.h>

using namespace std;

class Base
{
public:
	Base() { cout << "Base constructor" << endl; }
	virtual ~Base() { cout << "Base destructor" << endl; }
};

class Derived: public Base
{
public:
	Derived() { cout << "Derived constructor" << endl; }
	~Derived() { cout << "Derived destructor" << endl; }
};


int main(void)
{
	Base *pB = new Derived();
	delete pB;
	return 0;
}