#include <bits/stdc++.h>
using namespace std;

int board[502][502];
bool vis[502][502];

int n, m;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> board[i][j];
        }
    }

    int num = 0;
    int mx = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (vis[i][j] || board[i][j] == 0) continue;
            num++;
            queue<pair<int, int>> q;
            vis[i][j] = 1;
            q.push({i,j});
            int area = 0;
            while (!q.empty()) {
                area++;
                pair<int,int> cur = q.front(); q.pop();
                for (int dir = 0; dir < 4; dir++) {
                    int nx = cur.first + dx[dir];
                    int ny = cur.second + dy[dir];
                    if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
                    if (vis[nx][ny] || board[nx][ny] == 0) continue;
                    vis[nx][ny] = 1;
                    q.push({nx,ny});
                }
            }
            mx = max(mx, area);
        }
    }

    cout << num << "\n" << mx;

    return 0;
}