// you have to return the integer value of the result(neglect the decimal part).

#include <bits/stdc++.h>
using namespace std;

// Brute force: add the divisor again and again and mantain a count of it until sum is less or equal to the dividend.
// Time worst case(divisor == 1) -> O(dividend)
// can lead to TLE if divisor==1 and dividend = INT_MAX.
int divide2numbers(int dividend, int divisor)
{
  int sum = 0;
  int count = 0;

  while((sum+divisor)<=dividend)
  { 
    sum += divisor;
    count++;
  }
  return count;
}


// optimal approach
// Time -> (log(n))^2    not exact time complexity
int optimaldivide2numbers(int dividend, int divisor)
{
    if(dividend == divisor) return 1;
        bool sign = true;
        if(dividend >= 0 && divisor<0) sign = false;
        else if(dividend <= 0 && divisor>0) sign = false;

        long n = abs(dividend);
        long d = abs(divisor);
        divisor = abs(divisor);
        long ans = 0;
        while(n>=d)
        {
            int count = 0;
            while(n >= (d<<(count+1))) count++;
            ans += 1<<count;
            n = n - (d<<count);
        }
        if(ans == (1<<31) && sign==true) return INT_MAX;
        if(ans == (1<<31) && sign == false) return INT_MIN;
        return sign?ans:(-1*ans);
}
int main()
{
  int n1= 74;
  int n2 = 11;
  int ans = divide2numbers(n1,n2);
  cout<<ans<<endl;
}