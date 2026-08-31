class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        
        int n = nums.size();
        int arraysum =0;
        int x;
      unordered_map<int,int> freq;
      for(int x : nums) freq[x]++;
      for(auto p : freq){
       if(p.second == 2){
         x = p.first ;  
    }
      }
        int sum = (n*(n+1))/2;
        for(int  i =0;i<n;i++){
         arraysum+= nums[i];
        }
        int result = sum - (arraysum - x );
       
        
    
     return {x,result} ;
    }
};