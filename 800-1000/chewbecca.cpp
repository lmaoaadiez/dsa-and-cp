#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    
    for(int i=0;i<s.length();i++){
        if(s[i]>'9'-s[i]+'0'){
            s[i]='9'-s[i]+'0';
        }
    }
    if(s[0]=='0'){
        s[0]='9';
    }
    for(int i=0;i<s.length();i++){
        cout<<s[i];
    }
}