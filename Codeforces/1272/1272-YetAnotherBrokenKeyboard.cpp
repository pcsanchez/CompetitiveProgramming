#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, k;
    string s;
    char temp;
    unordered_set<char> letters;

    cin >> n >> k;
    cin >> s;
    while(k--) {
        cin >> temp;
        letters.insert(temp);
    }

    for(auto& c : s) {
        if(letters.find(c)!=letters.end()) {
            c = '1';
        } else {
            c = '0';
        }
    }

    long long first = 0;
    long long second = 0;
    long long ans = 0;

    while(first < s.length()) {
        if(s[first]=='1') {
            while(second < s.length() && s[second]!='0') {
                ++second;
            }
            ans += ((second-first)*(second-first+1))/2;
            first = second;
        }
        ++first;
        ++second;
    }

    cout << ans << endl;
    return 0;
}