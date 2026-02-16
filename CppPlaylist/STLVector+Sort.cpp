#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {5, 2, 9, 1};
    sort(v.begin(), v.end());

    for (int n : v)
        cout << n << " ";
}
