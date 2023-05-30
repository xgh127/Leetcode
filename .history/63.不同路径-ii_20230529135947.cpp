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
        //for the firsr col
        for(int i = 1; i < m ; ++i){
            //if encounter obstacle,then the following grid can't be reached
           if (obstacleGrid[i][0]){
            dp[i][0] = 0;
            i++;
            for(; i < m ; ++i){
                dp[i][0] = 0;
            }
            break;
           }else{
            dp[i][0] = 1;
           }
        } 
        //for the fisrt row
        for(int j = 0; j < n; ++j){
            // if enconuter obstacle,the the following grid can't be reached
            if(obstacleGrid[0][j]){
                dp[0][j] = 0;
                j++;
                for(; j < n ; ++j){
                    dp[0][j] = 0
                }
                break;

            }else{
                dp[0][j] = 1;
            }
        }
        //for the rest grid
        for(int i = 1; i < m; i++){
            for(int j = 1; j < n; ++j){
                if(i < m){
                    dp[i][j] += dp[i][j-1];
                }
                if (j < n){
                    dp[i][j] += dp[i-1][j];
                }
                
            }
        }
        return dp[m-1][n-1];

    }
};
// @lc code=end

