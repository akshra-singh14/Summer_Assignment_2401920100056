class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int row=0;
        int col=mat.size()-1;
        int sum=0;
        while(row!=mat.size()){
            if(row==col){
                sum=sum+mat[row][row];
            }
            else{
                sum=sum+mat[row][row]+mat[row][col];
            }
            row++;
            col--;
        }
        return sum;
    }
};
