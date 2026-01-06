#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    
    queue<int> q;
    int n;
    cin >> n;

    while (n--) {
        string op;
        cin >> op;
        if (op == "push") {
            int x;
            cin >> x;
            q.push(x);
        } else if (op == "pop") {
            if (q.empty()) cout << -1 << "\n";
            else {
                cout << q.front() << "\n";
                q.pop();
            } 
        } else if (op == "size") {
            cout << q.size() << "\n";
        } else if (op == "empty") {
            if (q.empty()) cout << 1 << "\n";
            else cout << 0 << "\n";
        } else if (op == "front") {
            if (q.empty()) cout << -1 << "\n";
            else cout << q.front() << "\n";
        } else if (op == "back") {
            if (q.empty()) cout << -1 << "\n";
            else cout << q.back() << "\n";
        }
    }

    return 0;
}