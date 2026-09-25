class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        long long totalSum = accumulate(nums.begin(), nums.end(), 0LL);
        long long target = totalSum - x;

        if (target < 0) {
            return -1;
        }

        int n = nums.size();
        int left = 0;
        int maxLength = 0;
        long long sum = 0;

        for (int right = 0; right < n; right++) {
            sum += nums[right];

            while (sum > target && left <= right) {
                sum -= nums[left];
                left++;
            }

            if (sum == target) {
                maxLength = max(maxLength, right - left + 1);
            }
        }

        if (maxLength == 0) {
            return (target == 0) ? n : -1;
        }

        return n - maxLength;
    }
};