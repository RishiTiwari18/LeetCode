class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int  n =nums.size();
        int actualsum=n*(n+1)/2;
        int expactedsum=0;
        for(int i=0;i<n;i++)
        {
            expactedsum=expactedsum+nums[i];

        }
        return actualsum-expactedsum;
    }
};