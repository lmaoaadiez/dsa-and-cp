#include <bits/stdc++.h>
using namespace std;
 
void countFreq(int arr[], int n)
{
    bool visited[n];
    for(int i=0;i<n;i++){
        visited[i]=false;
    }
    int max=0;
    int min=INT_MAX;

 
    for (int i = 0; i < n; i++) {
 
        // Skip this element if already processed
        if (visited[i] == true)
            continue;
 
        // Count frequency
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                visited[j] = true;
                count++;
            }
        }
        if(count>max){
            max=count;
        }
        if(count<min){
            min=count;
        }
        cout << arr[i] << " " << count << endl;

    }
    cout<<max<<" "<<min<<endl;
}
 
int main()
{
    int arr[] = {10,5,10,15,10,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    countFreq(arr, n);
    return 0;
}
