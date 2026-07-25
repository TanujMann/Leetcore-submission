class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        queue<pair<int,int>> q;
        int f = 0;
        int t = 0;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(grid[i][j] == 2)
                    q.push({i, j});
                else if(grid[i][j] == 1)
                    f++;
            }
        }

        if(f == 0) return 0;

        int dr[] = {-1, 1, 0, 0};
        int dc[] = {0, 0, -1, 1};

        while(!q.empty() && f > 0) {
            int size = q.size();
            t++;

            while(size--) {
                pair<int,int> fc = q.front();
                q.pop();

                int r = fc.first;
                int c = fc.second;

                for(int i = 0; i < 4; i++) {
                    int nr = r + dr[i];
                    int nc = c + dc[i];

                    if(nr >= 0 && nr < n && nc >= 0 && nc < m &&
                       grid[nr][nc] == 1) {
                        grid[nr][nc] = 2;
                        q.push({nr, nc});
                        f--;
                    }
                }
            }
        }

        return (f == 0) ? t : -1;
    }
};