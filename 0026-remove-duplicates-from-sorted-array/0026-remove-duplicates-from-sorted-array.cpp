class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i,j=0;
        int n=nums.size();
        for(i=0;i<n;i++){
            if(nums[i]!=nums[j]){
                j++;
                nums[j]=nums[i];
            }
        }
        
        return j+1;
    }
};