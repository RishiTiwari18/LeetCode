class Solution {
public:
int find(int index,int amount,vector<int>&coins,int n ,vector<vector<int>>&dp)
{
    if(amount==0)
    return 1;
    if(amount<0||index>=n)
    return 0;
    if(dp[index][amount]!=-1)
    return dp[index][amount];

    return dp[index][amount]=find(index,amount-coins[index],coins,n,dp)+find(index+1,amount,coins,n,dp);
}
    int change(int amount, vector<int>& coins) {
     int n = coins.size();

    vector<vector<int>> dp(
        n + 1,
        vector<int>(amount + 1, 0)
    );

    for (int i = 0; i <= n; i++)
        dp[i][0] = 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= amount; j++) {

            dp[i][j] = dp[i - 1][j];

            if (coins[i - 1] <= j) {
                if (dp[i][j - coins[i - 1]] > INT_MAX - dp[i - 1][j])
                    dp[i][j] = INT_MAX;
                else
                    dp[i][j] += dp[i][j - coins[i - 1]];
            }
        }
    }

    return dp[n][amount];

    }
};