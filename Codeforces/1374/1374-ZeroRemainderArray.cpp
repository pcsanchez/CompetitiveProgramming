#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Num {
    int d;
    int away;

    bool operator<(const Num& right) const {
        return away < right.away;
    }
};

int GetSteps(int num, int div) {
    int aux = div;
    while(aux < num) {
        aux+=div;
    }
    return aux - num;
}

int main() {

    int t;
    int n, k;
    int aux;
    int moves;

    cin >> t;

    while(t--) {
        cin >> n >> k;
        vector<Num> a(n);
        moves = 0;
        for(int i = 0;i < n; ++i) {
            cin >> aux;
            a[i].d = aux;
            a[i].away = GetSteps(aux, k);
        }

        sort(a.begin(), a.end());

        for(int i = 0; i < n; ++i) {
            
        }
    }

    return 0;
}