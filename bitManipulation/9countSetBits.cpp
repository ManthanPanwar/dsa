#include <bits/stdc++.h>
using namespace std;

// count using while loop
// Time -> O(size of number in binary form)
int countSetBits(int num)
{
  int cnt = 0;
  while(num)
  {
    if((num & 1) == 1) cnt++;
    num = num>>1;
  }
  return cnt;
}

// count using while loop
// using the concept of remove Last set bit
// Time average case -> O(log(n))
int betterCountSetBit(int num)
{
  int cnt = 0;
  while(num!=0)
  {
    num = ((num) & (num-1));
    cnt++;
  }
  return cnt;
}

int main()
{
  int num = 11; // 1011
  cout<<bitset<8>(num).to_string()<<endl;
  int cnt = countSetBits(num);
  cout<<cnt<<endl;
  int cnt2 = betterCountSetBit(num);
  cout<<cnt2<<endl;
}