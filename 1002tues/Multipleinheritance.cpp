#include <iostream>
using namespace std;

class A {
public:
    void showA() {
        cout << "From A" << endl;
    }
};

class B {
public:
    void showB() {
        cout << "From B" << endl;
    }
};

class C : public A, public B {};

int main() {
    C obj;
    obj.showA();
    obj.showB();
}
