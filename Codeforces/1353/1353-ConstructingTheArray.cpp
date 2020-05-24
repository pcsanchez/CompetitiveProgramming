#include <iostream>
#include <vector>
#include <set>

using namespace std;

struct custom {
    bool operator() (const pair<int,int> &a, const pair<int,int> &b) const {
        int len_a, len_b;
        len_a = a.second - a.first + 1;
        len_b = b.second - b.first + 1;
        if(len_a == len_b)
            return a.first < b.first;
        return len_a > len_b;
    }
};

int main() {

    int t, n;

    cin >> t;

    while(t--) {
        cin >> n;

        vector<int>a(n);

        set<pair<int,int>, custom> checks;
        checks.insert(make_pair(0,n-1));

        for(int i = 1;i <= n; ++i) {
            pair<int,int> curr = *checks.begin();
            checks.erase(checks.begin());
            int index = (curr.first + curr.second) / 2;
            a[index] = i;
            if(curr.first < index)
                checks.insert(make_pair(curr.first, index-1));
            if(curr.second > index)
                checks.insert(make_pair(index+1, curr.second));
        }

        for(const int x : a) {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}