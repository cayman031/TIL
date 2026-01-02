#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    stack<int> st;
    int k, ans = 0;
    cin >> k;


    while (k--) {
        int t;
        cin >> t;

        if (t == 0) {
            st.pop();
        } else {
            st.push(t);
        }
    }

    while (!st.empty()) {
        ans += st.top();
        st.pop();
    }

    cout << ans;

    return 0;
}