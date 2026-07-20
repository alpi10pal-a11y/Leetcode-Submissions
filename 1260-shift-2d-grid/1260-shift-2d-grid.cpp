class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        int total = m * n;
        k = k % total;

        vector<vector<int>> answer(m, vector<int>(n));

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                int newIndex = (i * n + j + k) % total;
                answer[newIndex / n][newIndex % n] = grid[i][j];
            }
        }
        return answer;
    }
};
