#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int x,y,z;
    cin>>x>>y>>z;
    int a = min(min(x,y),z);
    int b = max(max(x,y),z);
    cout<<b-a;
}