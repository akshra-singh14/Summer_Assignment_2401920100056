class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        bool common =true;
        string prefix="";
        if(strs.empty()){
            return prefix;
        }
        for(int i=0;i<strs[0].size();i++){
            for(int j=1;j<strs.size();j++){
                if(i>=strs[j].size()||strs[j][i]!=strs[0][i]){
                    common=false;
                    break;
                }
            }
            if(common==true){
                prefix.push_back(strs[0][i]);
            }
            else{
                break;
            }
        }
        return prefix;
    }
};
