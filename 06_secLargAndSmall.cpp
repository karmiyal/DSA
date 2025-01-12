#include<bits/stdc++.h>
using namespace std;

int SecondLargest(int n, vector<int> a) {
    int largest = a[0];
    int secondLargest = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] > largest) {
            secondLargest = largest;
            largest = a[i];
        } else if (a[i] != largest && a[i] > secondLargest) {
            secondLargest = a[i];
        }
    }
    return secondLargest;
}

int SecondSmallest(int n, vector<int> a) {
    int smallest = a[0];
    int secondSmallest = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (a[i] < smallest) {
            secondSmallest = smallest;
            smallest = a[i];
        } else if (a[i] != smallest && a[i] < secondSmallest) {
            secondSmallest = a[i];
        }
    }
    return secondSmallest;
}

vector<int> getSecondOrderElements(int n, vector<int> a) {
    int secondLargest = SecondLargest(n, a);
    int secondSmallest = SecondSmallest(n, a);
    return {secondLargest, secondSmallest}; // Return as a vector
}

int main() {
    vector<int> a = {9, 4, 2, 5, 8};
    int n = a.size();
    vector<int> result = getSecondOrderElements(n, a);

    cout << "Second Largest: " << result[0] << endl;
    cout << "Second Smallest: " << result[1] << endl;

    return 0;
}
