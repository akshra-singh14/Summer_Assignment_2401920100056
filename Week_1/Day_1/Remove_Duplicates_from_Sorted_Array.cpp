class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int updated=1,dup=1;
        for(dup=1;dup<nums.size();dup++){
            if(nums[dup]!=nums[dup-1]){
                nums[updated]=nums[dup];
                updated++;
            }
        }
        return updated;
    }
};
