#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t, r;
    cin >> t;
    string s;

    while (t--) {
        cin >> r >> s;
        for (int i = 0; i < s.length(); i++) {
            for (int j = 0; j < r; j++) {
                cout << s[i];
            }
        }
        cout << "\n";
    }


    return 0;
}