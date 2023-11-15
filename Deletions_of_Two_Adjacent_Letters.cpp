#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        char c;
        cin>>c;
        bool flag  = false;
        for(int i= 0;i<s.size();i++){
            if(s[i]==c){
                int left = i-0, right = s.size() - i -1;
                if(left%2==0 && right%2==0){
                    flag = true;
                    break;
                }
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}