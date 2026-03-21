class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int i;
        sort(nums.begin(),nums.end(),greater<int>());
        for( i =0;i<k;i++){
            continue;
        }
        return nums[i-1];
    }
};