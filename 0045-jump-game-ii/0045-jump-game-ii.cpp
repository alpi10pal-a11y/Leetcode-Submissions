class Solution {
public:
    int jump(vector<int>& nums) {
       int n = nums.size();
       if(n<=1) return 0;
       vector<int>status(n,-1);
       queue<int>Q;
       Q.push(0);
       status[0]=0;
       while(!Q.empty()){
        int curr= Q.front();
        Q.pop();
        for(int step = 1;step<=nums[curr];step++){
            int next = curr+step;
            if(next >= n) break;
            if(status[next] == -1){
                status[next] = status[curr]+1;
                if(next == n-1){
                    return status[next];
                }
                    Q.push(next);
                
            }
        }

        
       }
       return 0;
        
    }
};