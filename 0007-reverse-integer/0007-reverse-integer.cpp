class Solution {
public:
    int reverse(int x) {
       int r,ans=0; 
    while(x!=0){
        if(ans >INT_MAX/10 || ans< INT_MIN/10){
            return 0;
        
        }
        r=x%10;
        x=x/10;
        ans=(ans*10) +r;
    
    }   
        return ans;
    }
};