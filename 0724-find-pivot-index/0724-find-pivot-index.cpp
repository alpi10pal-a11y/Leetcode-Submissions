class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum =0;
        for(int i =0;i<nums.size();i++){
                 sum+=nums[i];
        }
        int ls = 0;
        for(int i =0;i<nums.size();i++){
            
          int right = sum-ls-nums[i];
          if(ls==right) 
            return i;
            ls+=nums[i];

        }
        return -1;
    }
};