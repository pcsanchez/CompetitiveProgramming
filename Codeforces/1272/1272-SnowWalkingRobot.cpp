#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main() {

    long q;
    long ans;
    int up_c, down_c, left_c, right_c;
    string s;
    unordered_map<char, long> m;

    cin >> q;

    while(q--) {
        cin >> s;
        ans = s.length();
        for(const auto& c : s) {
            m[c]++;
        }

        up_c = m['U'];
        down_c = m['D'];
        left_c = m['L'];
        right_c = m['R'];

        if(up_c > down_c) {
            ans -= up_c - down_c;
            up_c -= (up_c - down_c);
        } else {
            ans -= (down_c - up_c);
            down_c -= (down_c - up_c);
        }

        if(left_c > right_c) {
            ans -= (left_c - right_c);
            left_c -= (left_c - right_c);
        } else {
            ans -= (right_c - left_c);
            right_c -= (right_c - left_c);
        }

        if(up_c == 0 && left_c > 1) {
            ans -= 2*(left_c-1);
            left_c = 1;
            right_c = 1;
        }

        if(left_c == 0 && up_c > 1) {
            ans -= 2*(up_c-1);
            up_c = 1;
            down_c = 1;
        }

        cout << ans << endl;
        for(int i = 0; i < up_c; ++i) {
            cout << "U";
        }

        for(int i = 0; i < left_c; ++i) {
            cout << "L";
        }

        for(int i = 0; i < down_c; ++i) {
            cout << "D";
        }

        for(int i = 0; i < right_c; ++i) {
            cout << "R";
        }

        cout << endl;

        m.clear();
    }

    return 0;
}