#include<bits/stdc++.h>
using namespace std;
int mian(){
    int flag = 0;
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[k]<=arr[i]){
            flag++;
        }
    }
    cout<<flag<<endl;
    return 0;
}
