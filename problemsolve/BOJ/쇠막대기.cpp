#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    string s;
    cin >> s;

    stack<int> st;

    int ans = 0;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '(' && s[i+1] == ')') {
            ans += st.size();
            i++;
        } else if (s[i] == '(') {
            st.push(i);
        } else if (s[i] == ')') {
            st.pop();
            ans++;
        }
    }

    cout << ans;

    return 0;
}