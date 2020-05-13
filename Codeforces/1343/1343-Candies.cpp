#include <iostream>
#include <math.h>

using namespace std;

int main() {

    int t, n;
    int aux, k;

    cin >> t;

    while(t--) {
        cin >> n;
        aux = 3;
        k = 2;

        while(n%aux!=0) {
            aux += pow(2,k);
            ++k;
        }

        cout << n/aux << endl;

    }

    return 0;
}