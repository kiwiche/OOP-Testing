#include <bits/stdc++.h>

using namespace std;

void display() { 
    int a = 3;
    cout << a << endl;
}

void display(int a) {
    cout << a << endl;
}

void display(double a) {
    cout << a << endl;
}

void display(int a, float b) {
    cout << a << ", " << b << endl;
}

int main() {
    display(); //function call with no arguments
    display(5); // function call with one integer argument
    display(2.3); // function call with one floating argument
    display(5, 4.0); // function call with one interger and double arguments

    return 0;
} // end of program