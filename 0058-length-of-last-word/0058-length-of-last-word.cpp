class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length();
        int i = n - 1;
        int count = 0;

        // skip trailing spaces
        while(i >= 0 && s[i] == ' ') {
            i--;
        }

        // count last word characters
        while(i >= 0 && s[i] != ' ') {
            count++;
            i--;
        }

        return count;
    }
};