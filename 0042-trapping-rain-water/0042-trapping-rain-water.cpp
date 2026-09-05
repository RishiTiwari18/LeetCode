class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();

        if (n <= 2)
            return 0;

        vector<int> leftmax(n);
        vector<int> rightmax(n);

        // Left maximum
        leftmax[0] = height[0];

        for (int i = 1; i < n; i++) {
            leftmax[i] = max(leftmax[i - 1], height[i]);
        }

        // Right maximum
        rightmax[n - 1] = height[n - 1];

        for (int i = n - 2; i >= 0; i--) {
            rightmax[i] = max(rightmax[i + 1], height[i]);
        }

        int water = 0;

        for (int i = 0; i < n; i++) {
            int minheight = min(leftmax[i], rightmax[i]);

            water += minheight - height[i];
        }

        return water;
    }
};
