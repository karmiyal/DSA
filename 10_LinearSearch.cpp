#include<iostream>
#include<vector>
using namespace std;
int linearSearch(int n, int num, vector<int> &arr)
{
    for(int i=0;i<n;i++){
        if(arr[i]==num){
            return i;
        }
    }
    return -1;
}
int main(){
    int n=5;
    int num=3;
    vector<int> arr={1,2,3,4,5};
    linearSearch(n,num,arr);
}