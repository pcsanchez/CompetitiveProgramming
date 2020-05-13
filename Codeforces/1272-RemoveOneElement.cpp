#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int n;
    int ans = 1;
    
    cin >> n;

    vector<long long> v(n);

    for(int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    vector<int> s(n,1);

    for(int i = n-2; i >= 0; --i) {
        if(v[i+1] > v[i]) {
            s[i] = s[i+1] + 1;
        }
        ans = max(ans, s[i]);
    }

    vector<int> e(n,1);

    for(int i = 1; i < n; ++i) {
        if(v[i-1] < v[i]) {
            e[i] = e[i-1] + 1;
        }
        ans = max(ans, e[i]);
    }

    for(int i = 0;i < n-2; ++i) {
        if(v[i] < v[i+2]) {
            ans = max(ans, e[i] + s[i+2]);
        }
    }

    cout << ans << endl;


    return 0;
}