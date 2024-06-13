#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sortColors(vector<int>& values) {
    sort(values.begin(), values.end());
}

int main() {
    vector<int> values = {1, 2, 1, 0, 2, 2, 1, 0,};

    sortColors(values);

    for (int value : values) {
        cout << value << " ";
    }

    return 0;
}