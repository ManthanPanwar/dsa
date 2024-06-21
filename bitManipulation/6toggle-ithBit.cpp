#include <bits/stdc++.h>
using namespace std;

// we can do it by XOR operator
int toggleUsingLeftShift(int& num, int i)
{
  int temp = 1<<i;
  num = num ^ temp;
  return num;
}

int main()
{
  int num = 9; // 1001
  cout<<bitset<8>(num).to_string()<<endl;
  num = toggleUsingLeftShift(num, 2);
  cout<<bitset<8>(num).to_string()<<endl;
}