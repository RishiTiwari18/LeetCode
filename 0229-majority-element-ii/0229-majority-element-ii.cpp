class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        unordered_map<int,int>freq;
        int n =nums.size();
        for(int num:nums)
        {
            freq[num]++;

        }
        for(auto it:freq)
        {
            if(it.second>n/3)
            {
                ans.push_back(it.first);

            }
        }
        return ans ;

    }
};