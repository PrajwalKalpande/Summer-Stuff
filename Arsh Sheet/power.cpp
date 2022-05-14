class Solution {
public:
    double myPow(double x, int n) {
        if(n==0) return 1;
        
        if(n>0){
        double ans  = myPow(x,n/2);
        if(n&1)return x*ans*ans;
        return ans*ans;}
        
       else {
           
             double ans  = myPow(x,(n)/2);
            if(n&1)return ((ans*ans)/x);
        return (ans*ans);
            
    
        }
    }
};