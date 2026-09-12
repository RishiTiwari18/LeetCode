class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int start=0,end=n-1;
        while(start<end)
        {
            for(int i = start;i<=end;i++)
            {
                if(nums[i]>nums[end])
                swap(nums[i],nums[end]);
            }
            end--;
        }
    }
};