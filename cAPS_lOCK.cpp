#include<bits/stdc++.h>
using namespace std;
int main() {
string s;
cin >> s;
int k = 0;
for (int i = 1; i < s.size(); i++){
    if (s[i] < 95){
        k++;
    }
}
if (k + 1 == s.size()){
    for (int i = 0; i < s.size(); i++){
        if (s[i] < 95){
            s[i] = s[i] + 32;
        }
        else if (s[i] > 95){
            s[i] = s[i] - 32;
        }
 
    }
}
cout << s;
return 0;
}