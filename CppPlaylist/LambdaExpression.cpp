#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {3, 8, 1};

    sort(v.begin(), v.end(),
         [](int a, int b) { return a > b; });

    for (int n : v)
        cout << n << " ";
}
