/*
 * @lc app=leetcode.cn id=63 lang=cpp
 *
 * [63] 不同路径 II
 */

// @lc code=start
class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        //dp[i][j] = dp[i-1][j]+dp[i][j-1]
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        int dp[m][n]={0};
        dp[0] 

    }
};
// @lc code=end

