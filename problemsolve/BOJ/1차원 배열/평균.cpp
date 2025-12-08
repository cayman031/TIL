#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    double m = *max_element(v.begin(), v.end());

    double sum = 0.0;

    for (int i = 0; i < n; i++) {
        sum += v[i] / m * 100.0;
    }

    double avg = sum / n;

    cout << avg;

    return 0;
}