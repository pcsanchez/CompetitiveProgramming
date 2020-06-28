#include <iostream>

using namespace std;

int main() {

    int t, x, y, n;
    bool found = false;

    cin >> t;

    while(t--) {
        cin >> x >> y >> n;

        int s = y - (n%x);

        if(s > 0) {
            cout << n - ((n%x) + (x-y));
        } else if(s < 0) {
            cout << n + s;
        } else {
            cout << n;
        }
        cout << endl;
    }
    return 0;
}