class Solution {
public:
    bool isPrime(int n){
        if(n<=1) return false;
        if(n==2) return true;
        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0)
            return false;
        }
        return true;
    }
    int countPrimeSetBits(int left, int right) {
        
        int prime =0;
        for(int i =left;i<=right;i++){
            int count =0;
            int num = i;  
            while(num > 0){
                int m = num % 2;
                if(m == 1) count++;
                num = num / 2;
            }
            if(isPrime(count)) prime++;
        }
        return prime;
    }
};