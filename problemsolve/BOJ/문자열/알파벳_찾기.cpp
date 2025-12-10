#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    string s;
    cin >> s;

    for (char i = 'a'; i <= 'z'; i++) {
        cout << (int)s.find(i) << " ";
    }

    return 0;
}