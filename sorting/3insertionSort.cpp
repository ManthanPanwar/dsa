// takes an element and places it in its correct position
// starts from the 1st element and then increse rangeSize by 1 till N.
/*
step1: Select an element in each iteration from the unsorted array(using a loop).
step2: Place it in its corresponding position in the sorted part and shift the remaining elements accordingly (using an inner loop and swapping).
step3: The “inner while loop” basically shifts the elements using swapping.
*/

// outerloop will go to all elements,
// innerloop will go from i to 1 (not zero).

// Worst, Average Time-> O(N^2)
// Best Time-> O(N) when array is sorted.

#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>& arr)
{
	for(int i=0; i<arr.size(); i++)
	{
		int j=i;
		while(j>0 && arr[j-1]>arr[j]){
			swap(arr[j-1], arr[j]);
			j--;
		}
	}
}

int main()
{
	vector<int> arr= {1,4,67,23,7,1,79,57,5,0};
	insertionSort(arr);
	for(int x: arr)
		cout<<x<<endl;
}
