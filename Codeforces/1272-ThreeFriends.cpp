#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int q;
    vector<long long> v(3);

    cin >> q;

    while(q--) {
        cin >> v[0] >> v[1] >> v[2];
        sort(v.begin(),v.end());
        if(v[0]<v[2]) {
            v[0]++;
        }

        if(v[2]>v[0]) {
            v[2]--;
        }

        cout << 2*v[2] - 2*v[0] << endl;
    }

    return 0;
}