class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum =0;
        for(int i =0;i<nums.size();i++){
                 sum+=nums[i];
        }
        int cs = 0;
        for(int i =0;i<nums.size();i++){
            int ls=cs;
          int right = sum-cs-nums[i];
          if(ls==right) 
            return i;
            cs+=nums[i];

        }
        return -1;
    }
};