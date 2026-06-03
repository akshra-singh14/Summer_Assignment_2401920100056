class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
         int n=nums.size();
         vector<int> square(n); 
        int beg=0,end=n-1;
        for(int i=n-1;i>=0;i--){
            if((nums[beg]*nums[beg]) > (nums[end]*nums[end])){
                square[i]=nums[beg]*nums[beg];
                beg++;
            }
            else{
                square[i]=nums[end]*nums[end];
                end--;
            }
        }
        return square;
    }
};
