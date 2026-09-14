class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>pos,neg;
        for(int i =0 ;i<n ;i++)
        {
            if(nums[i]>0)
            pos.push_back(nums[i]);
            else
            neg.push_back(nums[i]);


        }
        vector<int>ans;
        for (int j = 0; j < pos.size(); j++) {
    ans.push_back(pos[j]);
    ans.push_back(neg[j]);
}
    return ans ;
    }
};