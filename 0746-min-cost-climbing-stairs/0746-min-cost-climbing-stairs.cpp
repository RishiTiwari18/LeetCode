class Solution {
public:
    int find(int n , vector<int>&cost,vector<int>&dp)
    {
    if(n<=1)
    return cost[n];
    if(dp[n]!=-1)
    return dp[n];

    
    return dp[n]= cost[n]+min(find(n-1,cost,dp),find(n-2,cost,dp));
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int>dp(n+2,-1);
        return min(find(n-1,cost,dp),find(n-2,cost,dp));

    }
};