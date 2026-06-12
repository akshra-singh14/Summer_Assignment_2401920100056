class Solution {
private:
    int expand(string& str, int i, int j) {
        int L = i, R = j;
        while (L >= 0 && R < str.size() && str[L] == str[R]) {
            L--;
            R++;
        }
        return R - L - 1;
    }
public:
    string longestPalindrome(string s) {
        int n = s.size();
        if (n <= 1) return s;
        int start = 0;
        int longest = 0;
        int idx = 0;
        while (idx < n) {
            int odd = expand(s, idx, idx);
            int even = expand(s, idx, idx + 1);
            int currentMax = max(odd, even);
            if (currentMax > longest) {
                longest = currentMax;
                start = idx - (currentMax - 1) / 2;
            }
            idx++;
        }
        string result = s.substr(start, longest);
        return result;
    }
};
