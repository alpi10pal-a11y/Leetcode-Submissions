class Solution {
public:
    string removeOuterParentheses(string s) {
        string s1;
        int count = 0;
        for(int i =0;i<s.size();i++){
            if(s[i]=='('){
                count++;
                if(count!=1){
                    s1.push_back(s[i]);
                }
            }
            else{
                if(count == 1){
                    count = 0;
                    continue;
                }else{
                    s1.push_back(s[i]);
                    count--;
                }
            }
        }
        return s1;
    }
};