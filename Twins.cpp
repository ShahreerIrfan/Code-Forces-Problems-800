#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n, coin = 0;
    cin >> n;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] == arr[i + 1]) {
            coin += 1;
            i++;
        }
    }

    cout << coin << endl;

    return 0;
}
