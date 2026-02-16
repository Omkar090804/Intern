#include <iostream>
using namespace std;

class Person {
public:
    Person() {
        cout << "Constructor Called\n";
    }

    ~Person() {
        cout << "Destructor Called\n";
    }
};

int main() {
    Person p;
    return 0;
}
