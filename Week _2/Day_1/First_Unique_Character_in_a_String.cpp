class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> character(26,0);
        for(int i=0;i<s.size();i++){
            int letter=s[i]-'a';
            character[letter]++;
        }
        for(int i=0;i<s.size();i++){
            int letter=s[i]-'a';
            if(character[letter]==1){
                return i;
            }
        }
        return -1;
    }
};
