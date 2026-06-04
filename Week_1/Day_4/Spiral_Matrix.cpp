class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        int r = matrix.size(),c = matrix[0].size();
        int elements = r * c, present=0;

        int begRow = 0, endRow = r - 1;
        int begCol = 0, endCol = c - 1;

        while (present < elements) {
            for (int i = begCol; i <= endCol && present < elements; i++) {
                result.push_back(matrix[begRow][i]);
                present++;
            }
            begRow++;
            for (int i = begRow; i <= endRow && present < elements; i++) {
                result.push_back(matrix[i][endCol]);
                present++;
            }
            endCol--;
            for (int i = endCol; i >= begCol && present < elements; i--) {
                result.push_back(matrix[endRow][i]);
                present++;
            }
            endRow--;
            for (int i = endRow; i >= begRow && present < elements; i--) {
                result.push_back(matrix[i][begCol]);
                present++;
            }
            begCol++;
        }
        return result;
    }
};
