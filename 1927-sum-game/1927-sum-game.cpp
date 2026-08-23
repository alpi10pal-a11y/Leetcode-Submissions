class Solution {
public:
    bool sumGame(string num) {
        int  n = num.size();
        int countleft =0,countright=0;
      int leftsum =0,rightsum =0;
      for(int  i =0;i<n;i++){
       if(i<n/2){
        if(num[i]=='?') countleft++;
        else leftsum = leftsum+(num[i]-'0');
       }
       else{
        if(num[i]=='?')countright++;
        else rightsum = rightsum+(num[i]-'0');
       }
      }  
      int  d = leftsum-rightsum;
      int totalcount = countleft+countright;
      if(totalcount%2!=0) return true;
      else{
        if(d+(((countleft-countright)/2)*9)==0) return false;
        else return true;
      }
      
    }
};