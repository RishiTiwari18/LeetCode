class Solution {
public:
    int maxDistance(vector<int>& position, int m) {
        int n = position.size();
        sort(position.begin(),position.end());

        int start=1,mid,ans;
        int end = position[n-1]-position[0];
        while(start<=end)
        {
            mid = start + (end - start)/2;
            int pos=position[0],count=1;
            for(int i=0 ;i<n ;i++)
            {
                if(pos+mid<=position[i])
                {
                    count++;
                    pos=position[i];

                }


            }
            if(count>=m)
            {
            ans=mid;

            start=mid+1;
            }
            else 
            {
                end=mid-1;
            }
        }
        return ans;
       
    }
};