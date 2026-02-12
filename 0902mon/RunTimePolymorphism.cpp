//function overriding

#include <iostream>
using namespace std;

class Parent {
public:
    virtual void show() {
        cout << "Parent class" << endl;
    }
};

class Child : public Parent {
public:
    void show() override {
        cout << "Child class" << endl;
    }
};

int main() {
    Parent* ptr;
    Child obj;

    ptr = &obj;
    ptr->show();   // Calls Child version
}
