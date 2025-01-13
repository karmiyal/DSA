vector<int> rotateArray(vector<int>arr, int k) {
    int size = arr.size();
    k= k % size; // Handle cases where n > size
    vector<int> temp(size);

    // Store the rotated elements in the temporary array
    for (int i = 0; i < size; i++) {
        temp[i] = arr[(i + k) % size];
    }

    // Copy back to the original array
    for (int i = 0; i < size; i++) {
        arr[i] = temp[i];
    }
    return arr;
}
