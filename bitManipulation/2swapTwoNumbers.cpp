#include <bits/stdc++.h>
using namespace std;


// swapping 2 numbers without using third variable.
// we can do this by using XOR operator.
/*
  a = a ^ b
  b = a ^ b   ---> b = (a ^ b) ^ b  ---> b = a ^ b ^ b  --->  b = a
  a = a ^ b   ---> a = (a ^ b) ^ a  ---> a = a ^ b ^ a  --->  a = b
*/
void swap2numbers(int& a, int& b)
{
  a = a^b;
  b = a^b;
  a = a^b;
}


int main()
{
  int a = 10;
  int b = 20;
  cout<<a<<" "<<b<<endl;
  swap2numbers(a,b);
  cout<<a<<" "<<b<<endl;
}