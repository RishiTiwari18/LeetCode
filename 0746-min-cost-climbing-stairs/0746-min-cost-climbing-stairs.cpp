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
        vector<int>dp(n);
        dp[0]=cost[0];
        dp[1]=cost[1];
        for(int i=2;i<n;i++)
        {
            dp[i]=cost[i]+min(dp[i-1],dp[i-2]);

        }
        return min(dp[n-1],dp[n-2]);
        
        

    }
};