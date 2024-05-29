// Brute force: this approach only works if there are no duplicates
/*
step1: Sort the array in ascending order
step2: The element present at the second index is the second smallest element
step3: The element present at the second index from the end is the second largest element
*/

// Better Approach: using 2 loops
/*
step1: Find the smallest and largest element in the array in a single traversal
step2: After this, we once again traverse the array and find an element that is just greater than the smallest element we just found.
step2: Similarly, we would find the largest element which is just smaller than the largest element we just found
*/

// Optimal Approach: using 1 loop (4 variables)

#include<bits/stdc++.h>
using namespace std;

int secondSmallest(int arr[],int n)
{
    if(n<2)
        return -1;
    int small = INT_MAX;
    int second_small = INT_MAX;
    int i;
    for(i = 0; i < n; i++) 
    {
       if(arr[i] < small)
       {
          second_small = small;
          small = arr[i];
       }
       else if(arr[i] < second_small && arr[i] != small)
       {
          second_small = arr[i];
       }
    }
   return second_small;     
}
int secondLargest(int arr[],int n)
{
	if(n<2)
	return -1;
    int large=INT_MIN,second_large=INT_MIN;
    int i;
    for (i = 0; i < n; i++) 
    {
        if (arr[i] > large) 
        {
            second_large = large;
            large = arr[i];
        }
 
        else if (arr[i] > second_large && arr[i] != large) 
        {
            second_large = arr[i];
        }
    }
    return second_large;                
}

int main() {
    int arr[]={1,2,4,7,7,5};  
    int n=sizeof(arr)/sizeof(arr[0]);
        int sS=secondSmallest(arr,n);
        int sL=secondLargest(arr,n);
    cout<<"Second smallest is "<<sS<<endl;
    cout<<"Second largest is "<<sL<<endl;
    return 0;
}