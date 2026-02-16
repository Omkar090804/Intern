#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

template <typename T>
T multiply(T a, T b) {
    return a * b;
}

int main() {
    vector<int> v = {4, 1, 7, 3};

    sort(v.begin(), v.end());

    try {
        if (v.empty())
            throw runtime_error("Vector is empty!");

        cout << "Sorted Vector: ";
        for (int n : v)
            cout << n << " ";

        cout << "\nMultiply: " << multiply(5, 6);
    }
    catch (exception& e) {
        cout << e.what();
    }

    return 0;
}
