#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 6; // Define the range of numbers (e.g., 1 to 6)
    int arr[] = {1, 2, 3, 5, 6}; // Example array
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Missing numbers: ";
    for (int i = 1; i <= n; i++) { // Iterate from 1 to n
        bool flag = false;
        for (int j = 0; j < size; j++) {
            if (arr[j] == i) {
                flag = true;
                break; // Break inner loop if the number is found
            }
        }
        if (!flag) {
            cout << i << " "; // Print the missing number
        }
    }

    return 0;
}
