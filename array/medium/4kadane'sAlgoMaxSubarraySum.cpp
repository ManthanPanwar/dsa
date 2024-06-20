// Brute force: We will check the sum of every possible subarray and consider the maximum among them(uses 2 loops).
// Time->O(n^2)

// Optimal: do not consider the subarray as a part of the answer if its sum is less than 0. A subarray with a sum less than 0 will always reduce our answer and so this type of subarray cannot be a part of the subarray with maximum sum.
/*
step1: while iterating we will add the elements to the sum variable and consider the maximum one.
step2: If at any point the sum becomes negative we will set the sum to 0 as we are not going to consider it as a part of our answer.

Time-> O(N)
*/

#include <bits/stdc++.h>
using namespace std;

long long maxSubarraySum(int arr[], int n) {
  //printing subarray
    
    long long maxi = LONG_MIN; // maximum sum
    long long sum = 0;
    int start;
    int ansStart,ansEnd;

    for (int i = 0; i < n; i++) {
        if(sum==0) start = i;
        sum += arr[i];

        if (sum > maxi) {
            maxi = sum;
            ansStart = start;
            ansEnd = i;
        }

        // If sum < 0: discard the sum calculated
        if (sum < 0) {
            sum = 0;
        }
    }

    // To consider the sum of the empty subarray
    // uncomment the following check:

    //if (maxi < 0) maxi = 0;
    for(int i=ansStart; i<=ansEnd; i++)
      cout<<arr[i]<<" ";

    return maxi;
}

int main()
{
    int arr[] = { -2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    long long maxSum = maxSubarraySum(arr, n);
    cout << "The maximum subarray sum is: " << maxSum << endl;
    return 0;
}