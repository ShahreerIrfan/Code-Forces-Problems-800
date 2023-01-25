#include<iostream>
using namespace std;
int main(void){
    int n,i;
    cin>>n;
    string s;

    for(i=0;i<n;i++){
        cin>>s;
        int size = s.size();
        if(size<=10){
            cout<<s;
        }
        else{
            cout<<s[0]<<size-2<<s[size-1];
        }
        }
 
    return 0;
}