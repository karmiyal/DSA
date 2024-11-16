#include<iostream>
using namespace std;
void bubble_sort(int arr[], int n)
{
    for(int i=n-1;i>=0;i--){
        int count=0;
        for(int j=0;j<=i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                count=1;
                
            }
        }
        if (count==0)
    {
        break;
    }
    cout<<"run"<<endl;
    }
    
}
int main(){
    int n;
    cout<<"Enter thr number";
    cin>>n;
    int arr[n];
    cout<<"Array befor sorting\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bubble_sort(arr,n);
    cout<<"Array after sorting\n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

////////////////////////////GFG/////////////////////////////////
//{ Driver Code Starts
#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    // Function to sort the array using bubble sort algorithm.
    void bubbleSort(vector<int>& arr ) {
        int n=arr.size();
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<n-i;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    swap(arr[j],arr[j+1]);
                }
            }
        }
    }
   
};


//{ Driver Code Starts.

// Driver program to test above functions
int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {

        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }

        Solution ob;

        ob.bubbleSort(arr);
        for (int e : arr) {
            cout << e << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends