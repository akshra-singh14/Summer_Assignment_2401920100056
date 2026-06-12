class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        if (n <= 1) return n;
        int w = 0;
        int r = 0;
        while (r < n) {
            char curr = chars[r];
            int cnt = 0;
            while (r < n && chars[r] == curr) {
                cnt++;
                r++;
            }
            chars[w++] = curr;
            if (cnt > 1) {
                string s = to_string(cnt);
                for (int j = 0; j < s.size(); j++) {
                    chars[w++] = s[j];
                }
            }
        }
        return w;
    }
};
