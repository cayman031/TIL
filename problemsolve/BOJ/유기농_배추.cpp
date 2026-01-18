#include <bits/stdc++.h>
using namespace std;

int M, N, K;                 // M: 가로(열), N: 세로(행)
int board[52][52];           // board[row][col]
bool vis[52][52];

int dr[4] = {1, 0, -1, 0};   // row 변화량
int dc[4] = {0, 1, 0, -1};   // col 변화량

void bfs(int sr, int sc) {
    queue<pair<int,int>> q;
    vis[sr][sc] = true;
    q.push({sr, sc});

    while (!q.empty()) {
        auto [r, c] = q.front(); q.pop();
        for (int dir = 0; dir < 4; dir++) {
            int nr = r + dr[dir];
            int nc = c + dc[dir];

            // nr은 행(0~N-1), nc는 열(0~M-1)
            if (nr < 0 || nr >= N || nc < 0 || nc >= M) continue;
            if (vis[nr][nc]) continue;
            if (board[nr][nc] == 0) continue;

            vis[nr][nc] = true;
            q.push({nr, nc});
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        cin >> M >> N >> K;

        // 이번 테스트케이스 영역 초기화
        for (int r = 0; r < N; r++) {
            fill(board[r], board[r] + M, 0);
            fill(vis[r], vis[r] + M, false);
        }

        // 입력 (x, y): x는 col, y는 row
        for (int i = 0; i < K; i++) {
            int x, y;
            cin >> x >> y;
            board[y][x] = 1;
        }

        int worm = 0;
        for (int r = 0; r < N; r++) {
            for (int c = 0; c < M; c++) {
                if (board[r][c] == 1 && !vis[r][c]) {
                    bfs(r, c);
                    worm++;
                }
            }
        }

        cout << worm << "\n";
    }
    return 0;
}
