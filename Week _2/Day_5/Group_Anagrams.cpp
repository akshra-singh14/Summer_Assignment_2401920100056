class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        int n = strs.size();
        int i = 0;
        while (i < n) {
            string k = strs[i];
            sort(k.begin(), k.end());   
            mp[k].push_back(strs[i]);
            i++;
        }
        vector<vector<string>> answer;
        for (pair<const string, vector<string>>& anagrams : mp) {
            answer.push_back(anagrams.second);
        }
        return answer;
    }
};
