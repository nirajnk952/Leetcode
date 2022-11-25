class Solution {
public:
    int findGCD(vector<int>& nums) {
        int ans=1;
sort(nums.begin(),nums.end());
for(int i=2;i<=nums[nums.size()-1];i++){
if(nums[0]%i==0 && nums[nums.size()-1]%i==0){
ans=i;
} 
    }
        return ans;
    }
};