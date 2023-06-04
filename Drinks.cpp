#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    double sum=0;
    vector<int>num(n);
    for(int i =0;i<n;i++){
        cin>>num[i];
    }
    for(int i=0;i<n;i++){
        sum+=num[i];
    }
 
    double result = sum/n;
    cout<<setprecision(12)<<fixed;
    cout<<result<<endl;


}