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
        dp[0][0] = 1;
        //for the firsr col
        for(int i = 1; i < m ; ++i){
            //if encounter obstacle,then the following grid can't be reached
           if (obstacleGrid[i][0]){
            dp[i][0] = 0;
            i++;
            for(; i < m ; ++i){
                dp[i][0] = 0;
            }
           }else{
            dp[i][0] = 1;
           }
        } 
        //for the fisrt row
        for(int j = 0; j < n; ++j){
            if
        }

    }
};
// @lc code=end

