#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s; //abhsvderrreess
    
    int hash[25]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]-'a']++;
    }
    int q;
    cin>>q;//3
    while(q--){
        char c;
        cin>>c;// e w r
        cout<<hash[c-'a']<<endl;//6 2 1
    }
    return 0;
}