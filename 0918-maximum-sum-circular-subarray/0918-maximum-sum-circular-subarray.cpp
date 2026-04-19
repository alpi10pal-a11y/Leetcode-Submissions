class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int total = 0;
        int maxsum = INT_MIN,currmax = 0;
        int minsum = INT_MAX,currmin = 0;
        for(int i:nums){
            currmax = max(i,currmax+i);
            maxsum = max(currmax,maxsum);
            currmin = min(i,currmin+i);
            minsum = min(currmin,minsum);
            total+=i;
        } 
        if(maxsum<0) return maxsum;
        return max(maxsum,total-minsum);
    }
};