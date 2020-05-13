#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n;

    cin >> n;

    vector<int> a(n);
    vector<int> even, odd;
    vector<vector<int>> g(n);

    for(int i = 0; i < n; ++i) {
        cin >> a[i];
        if(a[i] & 1) {
            odd.push_back(i);
        } else {
            even.push_back(i);
        }
    }

    for(int i = 0; i < n; ++i) {
        int leftI = i - a[i];
        int rightI = i + a[i];
        if( leftI >= 0) {
            g[leftI].push_back(i);
        }
        if( rightI)
    }


    return 0;
}