#include <iostream>

class A;
class B;

class A
{
public:
    A() : id(2) {}

    friend class B;
    // friend void A::showB(B &rB);

private:
    int id;
};

class B
{
public:
    B() : id(2) {}

    void showA(A &rA) { std::cout << rA.id << std::endl; }

private:
    int id;
};

// void B::showA(A &rA)
// {
//     std::cout << rA.id << std::endl;

//     return;
// }

int main()
{

    A a;
    B b;

    b.showA(a);

    return 0;
}