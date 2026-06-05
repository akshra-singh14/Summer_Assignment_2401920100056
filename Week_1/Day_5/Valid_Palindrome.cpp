class Solution {
public:
    bool isPalindrome(string s) {
        string alphaNum="";
        for(int i=0;i<s.size();i++){
            if(s[i]>='A'&&s[i]<='Z'){
                s[i]=s[i]-'A'+'a';
            }
        }
        for(int i=0;i<s.size();i++){
            if(s[i]>='a'&&s[i]<='z'||s[i]>='0'&&s[i]<='9'){
                alphaNum.push_back(s[i]);
            }
        }
        int start=0;
        int end=alphaNum.size()-1;
        while(start<end){
            if(alphaNum[start++]!=alphaNum[end--]){
                return false;
            }
        }
        return true;
    }
};
