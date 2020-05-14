#include <iostream>
#include <vector>

using namespace std;

int main() {

    int t, n;
    vector<int> left;
    vector<int> right;

    cin >> t;

    while(t--) {
        left.clear();
        right.clear();
        cin >> n;

        if((n/2%2!=0)) {
            cout << "NO" << endl;
        } else {

            cout << "YES" << endl;

            for(int i = 1; i <= n/2; ++i) {
                left.push_back(2*i);
            }

            for(int i = 0; i < left.size()/2; ++i) {
                right.push_back(left[i]-1);
            }

            for(int i = left.size()/2; i < left.size(); ++i) {
                right.push_back(left[i]+1);
            }

            for(int i = 0; i < left.size(); ++i) {
                cout << left[i] << " ";
            }

            for(int i = 0; i < right.size(); ++i) {
                cout << right[i] << " ";
            }

            cout << endl;
        }
    }

    return 0;
}