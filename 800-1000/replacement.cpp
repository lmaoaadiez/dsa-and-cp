#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    struct str{
        string s;
    };
    str arr[n];
    for(int i=0;i<n;i++){
       cin>> arr[i].s;
    }
    for(int i=0;i<n;i++){
       int arr1[26];
       for(int i=0;i<25;i++){
            arr1[i]=0;
       }
       for(int j=0;j<arr[i].s.length();j++){
        if(arr1[arr[i].s[j]-'a']==0){
            arr1[arr[i].s[j]-'a']=1;
        }
       }
       

    }
}