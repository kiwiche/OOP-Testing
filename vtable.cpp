class Base
{
public:
    virtual void function1() {}
    virtual void function2() {}
    void function3() {}
};

class D1: public Base
{
public:
    virtual void function1() {}
};

int main() {
    D1 d1;
    Base *dPtr = &d1;
}