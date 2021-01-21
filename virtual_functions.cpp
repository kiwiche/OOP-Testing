#include <bits/stdc++.h>

using namespace std;

class Animal
{
public:
    virtual void my_features() {
        cout << "I am an animal.\n";
    }
};

class Mammal : public Animal
{
public:
    void my_features() {
        cout << "I am a mammal.\n";
    }
};

class Reptile : public Animal
{
public:
    void my_features() {
        cout << "I am a reptile.\n";
    }
};

// intermediate function
void intermediate_func(Animal *a1) {
    a1.my_features();
}

int main() {
    Animal *obj1 = new Animal;
    Mammal *obj2 = new Mammal;
    Reptile *obj3 = new Reptile;

    // obj1->my_features();
    // obj2->my_features();
    // obj3->my_features();

    intermediate_func(obj1);
    intermediate_func(obj2);
    intermediate_func(obj3);

    return 0;
}