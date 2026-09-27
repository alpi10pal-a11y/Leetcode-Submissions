class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
         
        while(stones.size()>=2){
            sort(stones.begin(),stones.end());
             int ans = stones[stones.size()-1]-stones[stones.size()-2];
            stones.pop_back();
            stones.pop_back();
            if(ans!=0){
             stones.push_back(ans);
            }
             stones.size()-1;;
        }
        if(!stones.empty())
        return stones[0];
        else return 0;
    }
};