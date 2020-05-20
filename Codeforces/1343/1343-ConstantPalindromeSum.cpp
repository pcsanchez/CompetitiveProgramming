#include <iostream>
#include <vector>

using namespace std;

int main() {

    int t, n, k;

    cin >> t;

    while(t--) {
        cin >> n >> k;

        vector<int>a(n);
        for(auto &it: a)
            cin >> it;
        vector<int> sums(2*k+1);
        for(int i = 0;i < n/2; ++i) {
            ++sums[a[i] + a[n - i - 1]];
        }

        vector<int> psum(2*k+2);
        for(int i = 0; i < n/2; ++i) {
            int l = min(a[i], a[n - i - 1]) + 1;
            int r = max(a[i], a[n - i - 1]) + k;
            ++psum[l];
            --psum[r + 1];
        }

        for(int i = 1;i <= 2*k+1; ++i) {
            psum[i] += psum[i-1];
        }

        int ans = 1e9;
        for(int i = 2;i <= 2*k; ++i) {
            ans = min(ans, (psum[i] - sums[i]) + (n/2 - psum[i]) * 2);
        }

        cout << ans << endl;
    }
    return 0;
}