#include<iostream>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    struct str{
        string s;
    };
    int x;
    struct str arr[n];
    long long int i;
    for( i=0;i<n;i++){
        cin>>arr[i].s;
    }
    long long int s;
    long long int j;
    for( j=0;j<n;j++){
        if(arr[j].s=="Icosahedron"){
            x=20;
        }
        if(arr[j].s=="Cube"){
            x=6;
        }
        if(arr[j].s=="Dodecahedron"){
            x=12;
        }
        if(arr[j].s=="Tetrahedron"){
            x=4;
        }
        if(arr[j].s=="Octahedron"){
            x=8;
        }
        s=s+x;
    }
    cout<<s;

}