class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();

        int proMax = 1;
        int proMin = 1;
        int maxi = INT_MIN;

        for (int i = 0; i < n; i++) {

            if (nums[i] < 0) {
                swap(proMax, proMin);
            }

            proMax = max(nums[i], proMax * nums[i]);
            proMin = min(nums[i], proMin * nums[i]);

            maxi = max(maxi, proMax);
        }

        return maxi;
    }
};
