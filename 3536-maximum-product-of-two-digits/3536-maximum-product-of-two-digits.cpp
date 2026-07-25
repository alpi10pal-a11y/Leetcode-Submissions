class Solution {
public:
    int maxProduct(int n) {
        vector<int>result;
        while(n>0){
            int d = n%10;
            result.push_back(d);
              n = n/10;
        }
        sort(result.begin(),result.end() ,greater<int>());
        
           return result[0]*result[1];
    }
};