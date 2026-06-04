class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>> ans(r,vector<int>(c,0));
        int row=0,col=0;
        int m=mat.size();
        int n=mat[0].size();
        if(r*c!=m*n){
            return mat;
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(col!=c){
                    ans[row][col++]=mat[i][j];
                }
                else{
                    row++;
                    col=0;
                    ans[row][col++]=mat[i][j];
                }
            }
        }
        return ans;
    }
};
