// Brute force: using 2 loops and checking all possible profits for a particular day.
// Time-> O(n^2)

// Optimal approach: iterating through the loop and finding minimum buying price and maximum profit using 2 variables.
// Time-> O(n)

#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
  int buyingPrice = prices[0];
  int maxi = 0;

  for(int i=1; i<prices.size(); i++)
  {
    if(buyingPrice > prices[i])
        buyingPrice = prices[i];
    maxi = max(maxi, prices[i]-buyingPrice);
  }
  return maxi;
}