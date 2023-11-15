#include <iostream>
#include <string>

using namespace std;
int main() {
    int n;
    cin >> n;
    string fileName;
    cin >> fileName;

    int consecutiveX = 0;
    int removals = 0;

    for (int i = 0; i < n; ++i) {
        if (fileName[i] == 'x') {

            consecutiveX++;
        } else {

            consecutiveX = 0;
        }

        if (consecutiveX >= 3) {
            removals++;
        }
    }
    cout << removals << endl;

    return 0;
}
