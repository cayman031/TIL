#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t;
    string s;

    cin >> t;

    for (int i = 0; i < t; i++) {
        cin >> s;
        cout << s[0] << s[s.length()-1] << "\n";
    }



    return 0;
}