#include <bits/stdc++.h>

using namespace std;

class Base
{
public:
    virtual void printName() {
        cout << "Base" << endl;
    }
};


class Derived : public Base
{
public:
    void printName() {
        cout << "Derived" << endl;
    }
};


int main() {
    Derived d;
    Base b0 = d;
    Base &b1 = d;
    Base *b2 = &d;

    b0.printName();
    b1.printName();
    b2->printName();

    return 0;
}