class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>ans;
        
        for(int i=0 ;i<intervals.size();i++)
        {
            int start=intervals[i][0];
            int end = intervals[i][1];
            if(ans.size()==0)
            {
                ans.push_back({start,end});

            }
            else if(ans[ans.size()-1][1]<start)
            {
                ans.push_back({start,end});

            }
            else
            {
                ans[ans.size() - 1][1] =max(ans[ans.size() - 1][1], end);
            }

        }
        return ans ;

    }
};