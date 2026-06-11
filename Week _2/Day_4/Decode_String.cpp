class Solution {
private:
    string decode(const string& s, int& i) {
        string final = "";
        while (i < s.size() && s[i] != ']') {
            if (!isdigit(s[i])) {
                final += s[i];
                i++;
            } 
            else {
                int n = 0;
                while (i < s.size() && isdigit(s[i])) {
                    n = n * 10 + (s[i] - '0');
                    i++;
                }
                i++;
                string insideStr = decode(s, i);
                i++; 
                while (n > 0) {
                    final += insideStr;
                    n--;
                }
            }
        }
        return final;
    }

public:
    string decodeString(string s) {
        int index = 0;
        return decode(s, index);
    }

};
