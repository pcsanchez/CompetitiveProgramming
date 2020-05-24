#include <iostream>

using namespace std;

int main() {

    int t, n;        

    cin >> t;

    while(t--) {
        cin >> n;

        long long int ans = 0;

        for(int i = 1;i <= n/2; ++i) {
            ans += i * 1ll * i;
        }

        cout << ans * 8 << endl;
    }

    return 0;
}