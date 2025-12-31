#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    vector<string> arr = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
    
    string s;
    cin >> s;

    for (int i = 0; i < arr.size(); i++) {
        while (true)
        {
            int idx = s.find(arr[i]);
            if (idx == -1) break;
            else {
                s.replace(idx, arr[i].length(), "!");
            }
        }
    }
    cout << s.length();

    return 0;
}