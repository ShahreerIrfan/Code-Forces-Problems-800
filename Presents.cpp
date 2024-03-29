#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> gifts(n);

    for (int i = 0; i < n; i++) {
        cin >> gifts[i];
    }

    vector<int> friends(n);

    for (int i = 0; i < n; i++) {
        friends[gifts[i] - 1] = i + 1;
    }

    for (int i = 0; i < n; i++) {
        cout << friends[i] << " ";
    }

    return 0;
}
