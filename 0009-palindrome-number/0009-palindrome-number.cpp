class Solution {
public:
    bool isPalindrome(int x) {
        
        int ans=0,r;
        if(x<0 || ( x%10 == 0 && x!=0 )) return false;
        while(x>ans){
          r=x%10;
            x=x/10;
            ans=ans*10+r;
        }
        return x == ans || x == ans/10;
    }
};