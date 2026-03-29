class Solution {
public:
    bool isPalindrome(string s) {
        // Keep only alphanumeric characters
        s.erase(remove_if(s.begin(), s.end(),
                          [](char c){ return !isalnum(c); }),
                s.end());

        // Convert to lowercase
        transform(s.begin(), s.end(), s.begin(),
                  [](unsigned char c){ return tolower(c); });

        // Two-pointer check
        int left = 0, right = s.size() - 1;
        while (left < right) {
            if (s[left] != s[right]) return false;
            left++;
            right--;
        }
        return true;
    }
};
