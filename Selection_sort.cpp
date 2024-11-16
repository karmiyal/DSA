#include<bits/stdc++.h>
using namespace std;
void selection_sort(int arr[],int n)
{
    for(int i=0;i<=n-1;i++){
        int mini=i;
        for(int j=0;j<n;j++)
        {
            if(arr[j]<arr[mini])
            mini=j;
            
        }
        int temp= arr[i];
        arr[mini]=arr[i];
        arr[i]=temp;
    }
}
int main(){
    int n,arr[n];
    cout<<"Enter the Number: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selection_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}

//////////////////////////////GeekforGeek////////////////////////////////////
// class Solution
// {
//     public:
//     int select(int arr[], int i,int n)
//     {
//         selectionSort(arr,n);
//         for( i=0;i<n;i++){
//             cout<<arr[i]<<" ";
//         }
//         return 0;
        
//     }
     
//     void selectionSort(int arr[], int n)
//     {
//        for(int i=0;i<=n-1;i++){
//            int mini=i;
//            for(int j=i+1;j<n;j++){
//                if(arr[j]<arr[mini])
//                {
//                    mini=j;
//                }
//            }
//            int temp=arr[mini];
//               arr[mini]=arr[i];
//               arr[i]=temp;
//        }
//     }
// };