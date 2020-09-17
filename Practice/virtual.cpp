#include <iostream>

using namespace std;

class A {
   public:
    virtual void print() {
        cout << "virtual A Print";
    }
    void show() {
        cout << "A show";
    }
};

class B : public A {
   public:
    void print() {
        cout << "B Print";
    }
    void show() {
        cout << "B show";
    }
};

int main() {
    A *objptrA;
    B objB;
    objptrA = &objB;
    objB.print();
    objB.show();
    objptrA->print();
    objptrA->show();
    return 0;
}