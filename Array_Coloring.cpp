#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        int arr[n];
        int odd_sum = 0;
        int even_sum = 0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                even_sum+=arr[i];
            }
            else{
                odd_sum +=arr[i];
            }
        }
        if( (odd_sum%2==0 && even_sum % 2 == 0) || (odd_sum%2!=0 && even_sum%2!=0) ){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}