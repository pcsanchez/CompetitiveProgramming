#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {

    int t, n, k;

    cin >> t;

    while(t--) {
        cin >> n >> k;

        vector<int>a(n)
        for(auto &it: a)
            cin >> it;
        unordered_map<int,int> cnt;
        for(int i = 0;i < n/2; ++i) {
            ++cnt[a[i] + a[n - i - 1]];
        }
    }
    return 0;
}