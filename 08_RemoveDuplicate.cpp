#include <iostream>
#include <vector>
using namespace std;

// Function to remove duplicates from a sorted array
int removeDuplicates(vector<int> &arr, int n) {
    // Edge case: If the array is empty or has one element
    if (n == 0 || n == 1) {
        return n;
    }

    // Initialize the index of the last unique element
    int i = 0;

    // Iterate through the array
    for (int j = 1; j < n; j++) {
        // If the current element is different from the last unique element
        if (arr[i] != arr[j]) {
            // Move the current element to the next position after i
            arr[i + 1] = arr[j];
            // Increment the index of the last unique element
            i++;
        }
    }

    // Return the new length of the array
    return i + 1;
}

int main() {
    // Example input
    vector<int> arr = {1, 1, 2, 2, 3, 3, 4, 5, 5};
    int n = arr.size();

    // Call the function
    int newLength = removeDuplicates(arr, n);

    // Output the modified array and its new length
    cout << "Modified array: ";
    for (int i = 0; i < newLength; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "New length: " << newLength << endl;

    return 0;
}
