class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int count = 0;
        for(int i =0;i<tickets.size();i++){
            if( i<=k){
                
                int mincount = min(tickets[i],tickets[k]);
                count = count+mincount;
            }else{
                int mincount1 = min(tickets[k]-1,tickets[i]);
                count = count +mincount1;
            }
        }
        return count ;
    }
};