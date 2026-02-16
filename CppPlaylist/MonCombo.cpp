#include <iostream>
using namespace std;

class MyBuffer {
    int* data;
    size_t size;

public:
    MyBuffer(size_t s) : size(s) {
        data = new int[size];
        cout << "Constructor\n";
    }

    // Move Constructor
    MyBuffer(MyBuffer&& other) noexcept {
        data = other.data;
        size = other.size;

        other.data = nullptr;
        other.size = 0;

        cout << "Move Constructor\n";
    }

    // Move Assignment
    MyBuffer& operator=(MyBuffer&& other) noexcept {
        if (this != &other) {
            delete[] data;

            data = other.data;
            size = other.size;

            other.data = nullptr;
            other.size = 0;

            cout << "Move Assignment\n";
        }
        return *this;
    }

    // Delete copy constructor
    MyBuffer(const MyBuffer&) = delete;

    ~MyBuffer() {
        delete[] data;
        cout << "Destructor\n";
    }
};

MyBuffer createBuffer() {
    MyBuffer temp(1000);
    return temp;  // Move happens here
}

int main() {
    MyBuffer buf1 = createBuffer();  // Move Constructor
    MyBuffer buf2(500);
    buf2 = move(buf1);               // Move Assignment

    return 0;
}
