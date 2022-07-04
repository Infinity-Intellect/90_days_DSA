class Solution {
public:
    double myPow(double x, int n) {
      double res = powUtil(x, abs(n));
      
      if(n<0) {
        return 1/res;
      }
      return res;
    }
  
    double powUtil(double x, long long n) {
      if(n==0) {
        return 1;
      }
      if(x==0) {
        return 0;
      }
      double res = powUtil(x, n/2);
      res *= res;
      return n%2==1?x*res:res;
    }
};
