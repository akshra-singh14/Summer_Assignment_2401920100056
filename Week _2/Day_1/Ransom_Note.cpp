class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> character(26,0);
        for(int i=0;i<magazine.size();i++){
            int letter=magazine[i]-'a';
            character[letter]++;
        }
        for(int i=0;i<ransomNote.size();i++){
            int letter=ransomNote[i]-'a';
            character[letter]--;
        }
        for(int i=0;i<26;i++){
            if(character[i]<0){
                return false;
            }
        }
        return true;
    }
};
