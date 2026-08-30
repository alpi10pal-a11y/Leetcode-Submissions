class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int max_index = max_element(nums.begin(), nums.end()) - nums.begin();
        int min_index = min_element(nums.begin(), nums.end()) - nums.begin();
        int left = max(max_index, min_index) + 1;
        int right = n - min(max_index, min_index);
        int both = min_index + 1 + (n - max_index);
        int both2 = max_index + 1 + (n - min_index);
        return min({left, right, both, both2});
    }
};
