#include<iostream>
#include<stdio.h>
using namespace std;
void fn(int x){
    int k;
    int ld;
    int pow = 1;
    int count =0;
    int d=x;
    while(d>0){
        int ld=d%10;
        if(ld!=0){
            count++;
        }
        d=d/10;
    }
    cout<<count<<endl;
    
    while(x>0){
        ld=x%10;
        if(ld!=0){
            k=pow*ld;
            cout<<k<<" ";
            pow=pow*10; 
        }
        else{
            pow=pow*10;
        }
        x=x/10;
    }
    cout<<endl;
    
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    int x;
    for(int i=0;i<n;i++){       
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        fn(arr[i]);
    }

}