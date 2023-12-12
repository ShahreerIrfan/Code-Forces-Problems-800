#include<bits/stdc++.h>
using namespace std;
int main(void){
    int x,y;
    cin>>x>>y;
    int year = 0;
    while(x<=y){
        x*=3;
        y*=2;
        year++;
    }
    cout<<year<<endl;
}
//
