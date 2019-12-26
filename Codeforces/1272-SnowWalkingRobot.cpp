#include <iostream>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

int main() {

    long q;
    long long ans = 0;
    string s;
    unordered_map<char,int> m;

    cin >> q;

    while(q--) {
        cin >> s;
        for(const auto& c : s) {
            m[c]++;
        }
    }

    return 0;
}