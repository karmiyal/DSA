// vector<int> rotateArray(vector<int>arr, int k) {
//     int size = arr.size();
//     k= k % size; // Handle cases where n > size
//     vector<int> temp(size);

//     // Store the rotated elements in the temporary array
//     for (int i = 0; i < size; i++) {
//         temp[i] = arr[(i + k) % size];
//     }

//     // Copy back to the original array
//     for (int i = 0; i < size; i++) {
//         arr[i] = temp[i];
//     }
//     return arr;
// }
#include <iostream>
#include <vector>
using namespace std;

// Function to rotate the array by k positions
vector<int> rotateArray(vector<int> arr, int k) {
    int size = arr.size();
    k = k % size; // Handle cases where k > size
    vector<int> temp(size);

    for (int i = 0; i < size; i++) {
        temp[i] = arr[(i + k) % size];
    }

    return temp; // Return the rotated array
}

int main() {
    int n, k;

    // Input the size of the array
    cout << "Enter the size of the array: ";
    cin >> n;

    // Input the array elements
    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Input the number of rotations
    cout << "Enter the number of positions to rotate: ";
    cin >> k;

    // Get the rotated array
    vector<int> result = rotateArray(arr, k);

    // Output the rotated array
    cout << "Rotated Array: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

