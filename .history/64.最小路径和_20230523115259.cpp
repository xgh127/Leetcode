/*
 * @lc app=leetcode.cn id=64 lang=cpp
 *
 * [64] 最小路径和
 */

// @lc code=start
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();    // 行数
        int n = grid[0].size(); // 列数
        vector<vector<int>> dp(m, vector<int>(n, 0));
        //思路：dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + grid[i][j]
        //初始化: dp[0][0] = grid[0][0], dp[0][j] = dp[0][j-1] + grid[0][j], dp[i][0] = dp[i-1][0] + grid[i][0]
        for (size_t i = 0; i < m; i++)
        {
            
        }
        
            
};
// @lc code=end

