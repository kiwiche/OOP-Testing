#include <bits/stdc++.h>

using namespace std;

class ABC
{
public:
    ABC() {
        cout << "Hey look I am in constructor" << endl;
        // constructor defined
    }

    ~ABC() {
        cout << "Hey look I am in destructor" << endl;
    }
};


int main() {
    ABC cc1; // constructor is called

    cout << "function main is terminating...." << endl;
    // object cc1 goes out of scope, now destructor is being called

    return 0;
} // end of program