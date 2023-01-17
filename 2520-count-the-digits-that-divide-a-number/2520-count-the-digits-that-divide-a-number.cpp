class Solution {
public:
    int countDigits(int num) {
       /* int n = num;
        int cnt=0;
        while(num>0){
            int r= num%10;
            if(n%r==0){
            cnt++;
        
        }
        num=num/10;
        }
      return cnt;  
    }
    
};*/




int n=num; //121
int cnt=0;
while(n>0){
    int r=n%10; //1  - 2
    if(num%r==0){
        cnt++;
    }
    n=n/10; //12
}
return cnt;
}
};




