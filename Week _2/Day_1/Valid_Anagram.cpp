class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> character(26,0);
        if(s.size()!=t.size()){
            return false;
        }
        for(int i=0;i<s.size();i++){
            int str1=s[i]-'a';
            character[str1]++;
            int str2=t[i]-'a';
            character[str2]--;
        }
        for(int i=0;i<26;i++){
            if(character[i]!=0){
                return false;
            }
        }
        return true;
    }
};
