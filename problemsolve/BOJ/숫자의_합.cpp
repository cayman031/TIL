#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int n;
    cin >> n;

    int ans = 0;

    string s;
    cin >> s;

    for (int i = 0; i < n; i++) {
        ans += s[i] - '0';
    }

    cout << ans;

    return 0;
}