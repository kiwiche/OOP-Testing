#include <bits/stdc++.h>

using namespace std;

class box
{
private:
    int real, imag;
public:
    void getvalue() {
        cout << "Enter the value of real number:";
        cin >> real;
        cout << "Enter the value of imaginary number:";
        cin >> imag;
    }

    box operator+(box obj) {
        box temp;
        temp.real = this->real+obj.real;
        temp.imag = this->imag+obj.imag;
        return temp;
    }

    box operator-(box obj) {
        box temp;
        temp.real = this->real-obj.real;
        temp.imag = this->imag-obj.imag;
        return temp;
    }

    void display() {
        cout << real << "+(" << imag << ")" << "i" << endl;
    }
};


int main() {
    box b1, b2, b3, b4;

    b1.getvalue();
    b2.getvalue();

    b3 = b1+b2;
    b4 = b1-b2;

    cout << "Result is:\n";
    b3.display();
    b4.display();

    return 0;
}