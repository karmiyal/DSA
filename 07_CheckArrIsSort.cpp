#include <iostream>
#include <vector>
using namespace std;

bool isSorted(int n, vector<int>& a) {
    for (int i = 1; i < n; i++) {
        if (a[i] > a[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();

    if (isSorted(n, arr)) {
        cout << "The array is sorted." << endl;
    } else {
        cout << "The array is not sorted." << endl;
    }

    return 0;
}
//Non-decreasing order means that the elements in a sequence or array do not decrease as you move from left to right. This implies that each element is either greater than or equal to the previous one.

//Example of Non-Decreasing Order:
//Array: {1, 2, 2, 3, 4}
//Here, each element is greater than or equal to the one before it.
//Properties:
//Duplicates are allowed.
//Every element satisfies a[i] >= a[i-1] for all valid indices i.