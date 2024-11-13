#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;//4
    int arr[n]; //arr[4]
    for(int i=0;i<n;i++){
        cin>>arr[i];// 0 2 1 0
    }
    int hash[10]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }
    int q;
    cin>>q;//3  
    while(q--)//3,2,1
    {
        int number;//3
        cin>>number;// 0 2 1
        cout<<hash[number]<<endl; // 2 1 1
    }
}