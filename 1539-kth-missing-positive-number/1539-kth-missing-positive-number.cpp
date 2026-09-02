class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n =arr.size();
        int start=0,mid,end=n-1,ans=n;
        while(start<=end)
        {
        mid=start+(end-start)/2;
        int missing = arr[mid]-mid-1;
        if(missing >=k)
        {
            ans=mid;
            end=mid-1;

        }
        else
        start=mid+1;
        }
        return ans+k;


    }
};