#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    int n;
    cin >> n;

    while (n--) {
        string s;
        cin >> s;

        stack<char> st;
        bool isValid = true;

        for (char c:s) {
            if (c == '(') st.push(c);
            else {
                if (st.empty() || st.top() != '(') {
                    isValid = false;
                    break;
                }
                st.pop();
            }
        }

        if (!st.empty()) isValid = false;
        if (isValid) cout << "YES\n";
        else cout << "NO\n";
    }
}