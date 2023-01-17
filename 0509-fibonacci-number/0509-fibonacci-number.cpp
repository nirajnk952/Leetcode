class Solution {
public:
    // we hv taken int n becoz we hv to compute n fibonacci sequence 
    int fib(int n) {
       // we know the ist and 2nd fibonacci sequence i.e 0 and 1  
        if(n == 0 || n == 1) // it is base condition, if n is zero or one
            return n; // then return 1
        else
        return fib(n - 1) + fib(n - 2); // return what it wants
    } 
};      
        
        
        
        
        
        
        
        
        
        
   