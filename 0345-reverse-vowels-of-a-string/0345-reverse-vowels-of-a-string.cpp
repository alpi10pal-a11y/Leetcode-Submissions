class Solution {
public:
bool isvowel(char c){
     return (c=='A'||c=='E'||c=='I'||c=='O'||c=='U'||
                c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
}
    string reverseVowels(string s) {
         
          int n = s.size();
          int i =0 ;
          int  j = n-1;
         
         while(i<j){
            if(!isvowel(s[i])) i++;
            else if(!isvowel(s[j])) j--;
            else{
                swap(s[i] , s[j]);
                  i++;
                  j--;
            }

         }
         
             
          
         return s;
    }
};