#include <iostream>
#include <vector>

using namespace std;

int main() {

    long long t, n, aux, answer;
    long long minmax;
    int first, second;
    bool positive;
    vector<long long> seq;

    cin >> t;

    while(t--) {


        first = 0;
        second = 0;
        answer = 0;
        seq.clear();
        cin >> n;

        while(n--) {
            cin >> aux;
            seq.push_back(aux);
        }

        while(second < seq.size()) {
            positive = seq[first] > 0;
            minmax = seq[first];
            if(positive) {
                while(seq[first] > 0 && first < seq.size()) {
                    first++;
                }

                while(second < first) {
                    if(seq[second] > minmax)
                        minmax = seq[second];
                    second++;
                }
            } else {
                while(seq[first] < 0 && first < seq.size()) {
                    first++;
                }

                while(second < first) {
                    if(seq[second] > minmax)
                        minmax = seq[second];
                    second++;
                }
            }

            answer += minmax;

        }

        cout << answer << endl;

    }
    return 0;
}