class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int b = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                count++;
            } else {
                b = max(b, count);
                count = 0;
            }
        }

        return max(b, count);
    }
};
