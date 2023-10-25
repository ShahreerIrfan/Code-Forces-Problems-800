#include<bits/stdc++.h>
using namespace std;
int main(){
    int flag = 0;
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[k-1]<=arr[i] && arr[i] >0){
            flag++;
        }
    }
    cout<<flag<<endl;
    return 0;
}