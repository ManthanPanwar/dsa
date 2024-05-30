// Brute force: using liner search and flag variable
// Time->O(n*2)

// Better approach: using hashArray and if present then update the hashArray[arr[i]] = 1;
// Time->O(n+n)       space->O(n)

// Optimal 1: using sum variable and then subtracting sumOfNaturalNumbers from the calculated sum.
// Time->O(n)       space->O(1)

// most Optimal: using XOR (optimal becoz in previous approach we are doing n*(n+1) which can exceed int range).
// Time->O(n)       space->O(1)

#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int>&a, int N) {

    int xor1 = 0, xor2 = 0;

    for (int i = 0; i < N - 1; i++) {
        xor2 = xor2 ^ a[i]; // XOR of array elements
        xor1 = xor1 ^ (i + 1); //XOR up to [1...N-1]
    }
    xor1 = xor1 ^ N; //XOR up to [1...N]

    return (xor1 ^ xor2); // the missing number
}

int main()
{
    int N = 5;
    vector<int> a = {1, 2, 4, 5};
    int ans = missingNumber(a, N);
    cout << "The missing number is: " << ans << endl;
    return 0;
}