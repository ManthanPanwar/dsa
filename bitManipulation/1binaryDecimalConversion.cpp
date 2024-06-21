#include <bits/stdc++.h>
using namespace std;


// Decimal to Binary
// Time -> O(log(n))    space -> O(log(n))
string decimal2binary(int num)
{
  string res = "";
  while(num)
  {
    if(num%2 == 1) res = "1" + res; // res += "1";
    else res = "0" + res; // res += "0";
    num = num/2;
  }
  // reverse(res.begin(), res.end());
  return res;
}



// Binary to Decimal
// Time -> O(n) 
int binarytodecimal(string s)
{
  int sz = s.size();
  int power2 = 1;
  int res = 0;
  for(int i=sz-1; i>=0; i--)
  {
    if(s[i] == '1') res = res + power2;
    power2 *= 2;
  }
  return res;
}

/*
  1's compliment: flip all the bits.
  2's compliment: find 1's compliment and then add 1 to it.
*/

/*
  Binary Operators
  [
    AND(&)
    OR(|)
    XOR(^)
    RIGHT SHIFT(>>)
    LEFT SHIFT(<<)
    NOT(~): first it flips the bits then it checks if positive(stop) or if negative(store 2's compliment).
  ]
*/


int main()
{
  string str = decimal2binary(13);
  cout<<str<<endl;
  int b2d = binarytodecimal("1101");
  cout<<b2d<<endl;
  int x= 13;
  int y = ~x;
  cout<<x<<" "<<y<<endl;
}

