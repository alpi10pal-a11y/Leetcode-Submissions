class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n =nums.size();
        if(n==1)
        return true;
        vector<int>status(n,-1);
        queue<int>q;
        q.push(0);
        status[0]=0;
        while(!q.empty()){
            int x = q.front();
            q.pop();
            int  moves = nums[x];
            for(int i =1;i<=moves;i++){
                 int y = x+i;
                 if(y<n&&status[y]==-1){
                      status[y]=status[x]+1;
                      q.push(y);
                      if(y==n-1){
                        return true;
                      }
                 }
            }
        }
return false;
    }
};