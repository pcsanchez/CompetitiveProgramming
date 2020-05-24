#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int main() {

    int t;

    cin >> t;

    while(t--) {
        int n,k;

        cin >> n >> k;

        vector<int>a(n);
        vector<int>b(n);
        for(auto &it : a)
            cin >> it;
        for(auto &it: b)
            cin >> it;
        
        sort(a.begin(), a.end());
        sort(b.begin(), b.end(), greater<int>());

        for(int i = 0; i < k; ++i) {
            if(a[i] < b[i])
                a[i] = b[i];
        }

        int ans = 0;
        for(const int x : a) {
            ans +=x;
        }

        cout << ans << endl;
    }

    return 0;
}