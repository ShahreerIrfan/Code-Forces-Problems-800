#include<iostream>
using namespace std;
int main(void){
    int x,counter=0,i;
    cin>>x;
    string s;
    for(i=0;i<x;i++){
        cin>>s;
        if(s[1]=='+'){
            counter++;
        }
        else{
            counter--;
        }
    }
    cout<<counter;
    return 0;
}