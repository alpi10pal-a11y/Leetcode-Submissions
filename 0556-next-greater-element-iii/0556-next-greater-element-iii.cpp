class Solution {
public:
    int nextGreaterElement(int n) {
        string s = to_string(n);
        int m = s.size();
        int pivot = -1;
        for(int i = m - 2; i >= 0; i--) {
            if(s[i] < s[i+1]) {
                pivot = i;
                break;
            }
        }
        if(pivot == -1) return -1;
        reverse(s.begin() + pivot + 1, s.end());
        auto it = upper_bound(s.begin() + pivot + 1, s.end(), s[pivot]);
        swap(s[pivot], *it);
        long long ans = stoll(s);
        return (ans > INT_MAX) ? -1 : ans;
    }
};