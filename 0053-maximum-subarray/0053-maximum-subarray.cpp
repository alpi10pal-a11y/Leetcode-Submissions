class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxSum = nums[0];
        int minSum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            maxSum = max(sum - minSum, maxSum);
            if (sum < minSum && i < nums.size() - 1)
                minSum = sum;
        }
        maxSum = max(sum - minSum, maxSum);

        return maxSum;
    }
};