// this is how you get binary output
// cout<<bitset<8>(num).to_string(); 

#include <bits/stdc++.h>
using namespace std;

/*
  using left shift: shift a set bit to the specific position and then perform AND operation if(ans>0 set bit) or if(ans==0 unset bit).
  ((N & (1<<i)) != 0)

  using right shift: shift by ith places to right and then do AND operation with 1(if result == 1 set) otherwise(result == 0 unset).
  ((N>>i)&1 == 1)
*/
string checkUsingLeftShift(int num, int i)
{
  if((num & (1<<i)) != 0) return "true";
  else return "false";
}

string checkUsingRightShift(int num, int i)
{
  if(((num>>i) & 1) == 1) return "true";
  else return "false";
}

int main()
{
  int num = 9; // 1001
  cout<<bitset<8>(num).to_string()<<endl;
  cout<<checkUsingLeftShift(num, 3)<<endl;
  cout<<checkUsingRightShift(num, 0)<<endl;
}