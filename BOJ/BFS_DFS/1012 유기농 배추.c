#include <cstdio>

int occ[51][51];
int visit[51][51];
int dx[] = {0,0,-1,1};
int dy[] = {1,-1,0,0};
int T, M, N, K, column, row;
int count;


void dfs(int x, int y) {
    visit[x][y] = true;
    for (int k = 0; k < 4; k++) {
        int nx = x + dx[k];
        int ny = y + dy[k];
        if (0 <= nx && nx < N && 0 <= ny && ny < M) {
            if (occ[nx][ny]&&!visit[nx][ny]) {
                visit[nx][ny] = true;
                dfs(nx, ny);
            }
        }
    }
}

void reset() {
    count = 0;
    for (int i=0; i<N; ++i) {
        for (int j=0; j<M; ++j) {
            occ[i][j] = 0; visit[i][j] = false;
        }
    }
}

int main() {
    scanf("%d", &T);

    while (T--) {
        reset();
        scanf("%d %d %d", &M, &N, &K);
        
        for (int i=0; i<K; ++i) {
            scanf("%d %d", &column, &row);
            if (0 <= column && column < M && 0 <= row && row < N)
                occ[row][column] = 1;
        }
        
        for (int i=0; i<N; ++i) {
            for (int j=0; j<M; ++j) {
                if (occ[i][j] && !visit[i][j]) {
                    dfs(i, j); ++count;
                }
            }
        }
        printf("%d", count);
    }
}
