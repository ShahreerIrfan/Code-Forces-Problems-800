#include<iostream>
#include<algorithm>
using namespace std;
int main(void){
    string s;
    cin>>s;
    int i, counter = 0;
    sort(s.begin(),s.end());
    for(i=0;i<s.size();i++){
        if(s[i]!=s[i+1]){
            counter++;
        }
    }
    if(counter%2==0){
        cout<<"CHAT WITH HER!";
    }
    else{
        cout<<"IGNORE HIM!";
    }
}