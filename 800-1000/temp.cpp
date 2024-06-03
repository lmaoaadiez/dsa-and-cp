#include<bits/stdc++.h>
using namespace std;
int main(){
         int m,n,k;
        cin>>m>>n>>k;
        int b[m];
        int c[n];
        for(int j=0;j<m;j++){
            cin>>b[m];
        }
        for(int j=0;j<n;j++){
            cin>>c[n];
        }
        for(int j=0;j<m-1;j++){
            for(int k =0;k<m-j-1;k++){
                if(b[k]>b[k+1]){
                    int temp = b[k];
                    b[k]=b[k+1];
                    b[k+1]=temp;
                }
            }
        }
        for(int j=0;j<n-1;j++){
            for(int k =0;k<n-j-1;k++){
                if(c[k]>c[k+1]){
                    int temp = c[k];
                    c[k]=c[k+1];
                    c[k+1]=temp;
                }
            }
        }
        int p=0;
        int q=0;
        int count=0;
        while(p<m&&q<n){
            if(b[p]+c[q]<=k){
                count++;
                q++;
            }
            if(b[p]+c[q]>k){
                q=0;
                p++;
            }
            if(b[p]>k){
                break;
            }           
        }
        cout<<count<<endl;
}