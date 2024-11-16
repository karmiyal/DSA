//Shorting means arranging of element in the increasing or decreasing order basaed on the condition
//It divide the array into two parts one is shorted and is unshorted
#include<bits/stdc++.h>
using namespace std;       
void selection_sort(int arr[],int n)//arr[5],5
{
    for(int i=0;i<=n-1;i++){      
        int mini=i;//mini=0
        for(int j=i+1;j<n;j++)   
        //i=0 
        //j=1;1<5
        //j=2;2<5
        //j=3;3<5
        //j=4;4<5
        //like wise i=1(j=2 to j=4) i=2(j=3 to j=4)  i=3(j=4)  
        {
            if(arr[j]<arr[mini])
            //arr[1]<arr[0]=>0<9 true, mini=1
            //arr[2]<arr[1]=>3<0 false(No change),mini=1
            //arr[3]<arr[1]=>2<0 false(no chnage),mini=1
            //arr[4]<arr[1]=>1<0 fasle(no change),mini=1
             mini=j;
             //mini=1
            
        }
        //temp=0
        int temp= arr[mini];
        //arr[1]=9
        arr[mini]=arr[i];
        //arr[0]=0
        arr[i]=temp;
    }
}
int main(){
    int n,arr[n]; //arr[5]
    cout<<"Enter the Number: ";
    cin>>n; //5
    for(int i=0;i<n;i++){
        cin>>arr[i];//0=>9 1=>0 2=>3 3=>2 4=>1
    }
    selection_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;//0 1 2 3 9
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