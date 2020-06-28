#include <iostream>
#include <string>

using namespace std;

int main() {

    int n,t;
    string s;
    int count, ans;

    cin >> t;

    while(t--) {
        cin >> n;
        cin >> s;
        count = 0;
        ans = 0;

        for(const char& c : s) {
            if(c == '(') {
                count++;
            } else {
                if(count == 0) {
                    ++ans;
                    count = 0;
                } else {
                    --count;
                }
            }
        }

        cout << ans << endl;
    }

    return 0;
}