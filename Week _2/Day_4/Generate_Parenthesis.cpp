class Solution {
    private:
    void check(vector<string>& finalans, string& current, int open, int close, int maximum) {
        if (current.length() == maximum * 2) {
            finalans.push_back(current);
            return;
        }
        if (open < maximum) {
            current.push_back('(');
            check(finalans, current, open + 1, close, maximum);
            current.pop_back();
        }
        if (close < open) {
            current.push_back(')');
            check(finalans, current, open, close + 1, maximum);
            current.pop_back();
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string> finalans;
        string current = "";
        check(finalans, current, 0, 0, n);
        return finalans;
    }
};
