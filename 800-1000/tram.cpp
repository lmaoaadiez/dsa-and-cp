#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    struct str{
        int x;
        int y;
    };
    struct str arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i].x;
        cin>>arr[i].y;
    }
    int max=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=(arr[i].y-arr[i].x);
        if(sum>=max){
            max=sum;
        }
    }
    cout<<max<<endl;
    
}