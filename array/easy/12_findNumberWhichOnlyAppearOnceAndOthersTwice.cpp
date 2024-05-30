// Brute force: for every element do a linear search and if count == 1 then return the answer.
// Time->O(n*2)

// Better Approach 1: use hashArray and store the count and then traverse the hashArray and return the index whose value is 1.
// Time->O(n)       space->O(n+1)

// Better Approach 2: use map data structure to store the frequencies and then iterate through the map and return iterator.first whose iterator.second == 1.
// Time->O(N*logM) + O(M)         space->O(N/2 + 1)

// Optimal: using XOR on all elements using loop and it will directly give the answer(7^0 = 7).
// Time->O(n)

#include <bits/stdc++.h>
using namespace std;

int getSingleElement(vector<int> &arr) {
    //size of the array:
    int n = arr.size();

    // XOR all the elements:
    int xorr = 0;
    for (int i = 0; i < n; i++) {
        xorr = xorr ^ arr[i];
    }
    return xorr;
}

int main()
{
    vector<int> arr = {4, 1, 2, 1, 2};
    int ans = getSingleElement(arr);
    cout << "The single element is: " << ans << endl;
    return 0;
}



