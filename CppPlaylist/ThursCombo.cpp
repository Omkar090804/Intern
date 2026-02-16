#include <iostream>
#include <string>

using namespace std;

class Shape {
protected:
    string name;

public:
    // Constructor
    Shape(const string& n) : name(n) {
        cout << "Shape Constructor called for " << name << endl;
    }

    // Pure virtual function or Abstract method - must be overridden by derived classes and object cannot be created from this class
    virtual double area() const = 0;

    // Virtual function
    virtual void display() const {
        cout << "This is a shape: " << name << endl;
    }

    // Virtual destructor
    virtual ~Shape() {
        cout << "Shape Destructor called for " << name << endl;
    }
};

class Rectangle : public Shape {
private:
    double width, height;

public:
    // Constructor with initializer list
    Rectangle(double w, double h)
        : Shape("Rectangle"), width(w), height(h) {}

    double area() const override {
        return width * height;
    }

    void display() const override {
        cout << "Rectangle Area: " << area() << endl;
    }
};

int main() {
    Shape* s = new Rectangle(5, 4);

    s->display();   // Runtime polymorphism

    delete s;       // Proper destructor call

    return 0;
}
