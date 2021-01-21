#include <bits/stdc++.h>

using namespace std;

class check_count
{
public:
    int count_plus;
    int count_minus;

    check_count() {
        count_plus = 0;
        count_minus = 2;
    };
    void operator ++() { ++count_plus; } // count increment
    void operator --() { --count_minus; } // count decrement
};


int main() {
    check_count x, y;

    // before increment / decrement
    cout << "x = " << x.count_plus << endl;
    cout << "y = " << y.count_minus << endl;

    ++x;
    --y;

    // after incremnet / decrement
    cout << "\nAfter increment / decrement\n";
    cout << "x = " << x.count_plus << endl;
    cout << "y = " << y.count_minus << endl;

    return 0;
}