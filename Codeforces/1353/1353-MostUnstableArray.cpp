#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {

    int t;

    cin >> t;

    while(t--) {
        int n, m;

        cin >> n >> m;

        int ans = 0;

        if(n == 1) {
            ans = 0; 
        } else if(n < 3) {
            ans = m;
        } else {
            ans = m*2;
        }

        cout << ans << endl;
    }

    return 0;
}