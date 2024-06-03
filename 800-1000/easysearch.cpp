#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int i;
    for( i=0;i<n;i++){
        if(arr[i]==1){
            cout<<"HARD";
            break;
        }
    }
    if(i==n){
        cout<<"EASY";
    }
}