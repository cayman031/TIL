#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> v(n+1);
    
    for (int i = 1; i <= n; i++) {
        v[i] = i;
    }

    while (m--) {
        int i, j;
        cin >> i >> j;

        reverse(v.begin() + i, v.begin() + j + 1);
    }

    for (int i = 1; i <= n; i++) {
        cout << v[i] << " ";
    }


    return 0;
}