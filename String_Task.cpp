#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    string s1;
    cin>>s;
    for(int i=0;i<s.size();i++){
        //s1+=tolower(s[i]);
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='Y'){
            continue;
        }
        else{
            s1+='.';
            s1+=tolower(s[i]);
        }
    }
    cout<<s1<<endl;
    
}