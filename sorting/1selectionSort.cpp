// we select minimums
/*
step1: in each iteration, we will select the minimum element from the range of the unsorted array using an inner loop.
step2: we will swap the minimum element with the first element of the selected range(in step 1).

->outerloop goes from 0 to size of the array.
->and innerLoop fill find smallest in each outerloop iteration.
*/

// Best, Worst, Average Time-> O(N^2)


#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>& arr)
{
	for(int i=0; i<arr.size()-1; i++)
	{
		int index = i;
		for(int j=i; j<arr.size(); j++)
			if(arr[j]<arr[index])
				index = j;
		swap(arr[i], arr[index]);
	}
}

int main()
{
	vector<int> arr= {1,4,67,23,7,1,79,57,5,0};
	selectionSort(arr);
	for(int x: arr)
		cout<<x<<endl;
}
