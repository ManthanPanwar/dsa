// Brute force: using 2 loops, We will start with the element at the 0th index, and will compare it with all of its future elements that are present in the array and finally If the size of the array is Zero or One i.e ( N = 0 or N = 1 ) or the entire array is traversed successfully then we will simply return True.

// Optimal: for a sorted array the previous of every element is smaller than or equal to its current element.

#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int n) {
  for (int i = 1; i < n; i++) {
    if (arr[i] < arr[i - 1])
      return false;
  }

  return true;
}

int main() {

  int arr[] = {1, 2, 3, 4, 5, 1}, n = 6;

  cout<<(isSorted(arr, n) ? "True" : "False");

}