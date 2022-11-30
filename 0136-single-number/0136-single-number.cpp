class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
     
        /*int ans=0;
        for(auto a:nums)
            ans=ans^a;
        return ans;*/
        
        
        
        
        
         int n= nums.size();
        int ans=0;
        for(int i=0;i<n;i++)
            ans=ans^nums[i];
        return ans;
    }
};