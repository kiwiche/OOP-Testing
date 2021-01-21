#include <bits/stdc++.h>

using namespace std;

// declaring abstract base class
class base_class
{
public:
    virtual void display() = 0;
    // pure virtual function
};

class derived_class : public base_class
{
public:
    void display() {
        cout << "This is simple illustration of abstract class and pure virtual function\n";
    }
};


int main() {
    derived_class obj;

    obj.display();

    return 0;
}