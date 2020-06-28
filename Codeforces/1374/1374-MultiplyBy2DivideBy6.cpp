#include <iostream>

using namespace std;

int main() {

    int t;
    int n;
    int moves;
    bool pos;
    cin >> t;

    while(t--) {
        cin >> n;
        moves = 0;
        pos = true;
        while(n != 1) {
            if(n%3!=0) {
                pos = false;
                break;
            } else {
                if(n%6!=0) {
                    n*=2;
                } else {
                    n/=6;
                }
                ++moves;
            }
        }

        pos ? cout << moves << endl : cout << -1 << endl;

    }
    return 0;
}