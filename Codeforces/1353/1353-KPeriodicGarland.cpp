#include <iostream>
#include <string>

using namespace std;

int main() {

    int t;

    cin >> t;

    while(t--) {
        int n, k;

        cin >> n >> k;

        string s;

        cin >> s;

        int total_on = 0;
        for(int i = 0; i < s.length(); ++i) {
            total_on+=(s[i] == '1');
        }

        int ans = total_on;

        for(int i = 0;i < k; ++i) {
            int changes = 0;
            for(int j = i;j < n; j+=k) {
                if(s[j] == '1')
                    ++changes;
                else
                    --changes;
                changes = max(changes, 0);
                ans = min(ans, total_on - changes);
            }
        }

        cout << ans << endl;
    }

    return 0;
}