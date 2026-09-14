class Solution {
public:
    vector<vector<int>> cyclicShift(
        int n,
        vector<vector<int>>& grid,
        vector<int>& rowShift,
        vector<int>& colShift
    ) {
        vector<vector<int>> ans(n, vector<int>(n));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {

                int oldRow = (i + colShift[j]) % n;

                int oldCol = (j + rowShift[oldRow]) % n;

                ans[i][j] = grid[oldRow][oldCol];
            }
        }

        return ans;
    }
};