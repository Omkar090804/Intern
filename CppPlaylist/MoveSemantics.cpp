#include <iostream>
using namespace std;

class Test {
public:
    Test() { cout << "Constructor\n"; }

    Test(Test&&) noexcept {
        cout << "Move Constructor\n";
    }
};

int main() {
    Test t1;
    Test t2 = move(t1);
}
