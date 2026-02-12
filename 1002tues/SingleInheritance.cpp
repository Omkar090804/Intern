#include <iostream>
using namespace std;

class A {
public:
    void show() {
        cout << "Class A function" << endl;
    }
};

class B : public A {
public:
    void display() {
        cout << "Class B function" << endl;
    }
};

int main() {
    B obj;
    obj.show();    // inherited
    obj.display(); // own function
}
