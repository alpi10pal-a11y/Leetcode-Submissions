class Solution {
public:
    bool isPalindrome(int  x){
    if(x<0)
    return false;
    int n;
    int y = x;
    long long  rev = 0;
    while(x>0){
      n = x % 10;
      rev = rev *10+ n;
      x = x/10;
    }
    return rev == y;
    }
};