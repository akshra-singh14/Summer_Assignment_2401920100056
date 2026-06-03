class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0,right=height.size()-1;
        int water,result=0;
        while(left<right){
            water=min(height[left],height[right])*(right-left);
            result=max(result,water);
            if(height[left]>height[right]){
                right--;
            }
            else{
                left++;
            }
        }
        return result;
    }
};
