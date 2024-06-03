#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=arr[n-1];
    int min=arr[0];
    int min_count;
    int max_count;
    for(int i=0;i<n;i++){
        if(arr[i]<=min){
            min_count=i;
            min=arr[i];
        }
        if(arr[n-1-i]>=max){
            max_count=n-1-i;
            max=arr[n-1-i];
        }
    }
    int x;
    if(min_count>=max_count){
        x=(n-1-min_count)+max_count;
        cout<<x;
    }
    if(min_count<max_count){
        x=(n-1-min_count)+max_count-1;
        cout<<x;
    }

}
