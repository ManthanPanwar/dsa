// brute force: using sorting and returning last element
// Time->O(n*log(n))


// optimal: using max_variable and iterating through the loop
// Time->O(n)

#include <bits/stdc++.h>
using namespace std;

int findLargestElement(int arr[], int n) {
 
  int max = arr[0];
  for (int i = 0; i < n; i++) {
    if (max < arr[i]) {
      max = arr[i];
    }
  }
  return max;
}
int main() {
  int arr1[] = {2,5,1,3,0};
  int n = 5;
  int max = findLargestElement(arr1, n);
  cout << "The largest element in the array is: " << max << endl;
}
