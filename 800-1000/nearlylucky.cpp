#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    int i;
    int count = 0;
    for(i=0;i<s.length();i++){
        if((s[i]=='4')||(s[i]=='7')){
            count++;
        }
    }
    if((count==4)||(count==7)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}