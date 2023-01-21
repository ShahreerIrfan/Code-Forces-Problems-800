#include<iostream>
using namespace std;
int main(void){
    int n,i,t,v,p,sub=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>t>>v>>p;
        if(t+v+p>=2){
            sub++;
        }
    }
    cout<<sub<<endl;
    return 0;
}