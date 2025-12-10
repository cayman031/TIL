#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    string s;
    int ans = 1;

    getline(cin, s);

    if (s.length() == 1 && s[0] == ' ') {
        cout << 0;
        return 0;
    }

    for (int i = 1; i < s.length()-1; i++) {
        if (s[i] == ' ') {
            ans++;
        }
    }

    cout << ans;

    return 0;
}