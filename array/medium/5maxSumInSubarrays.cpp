// This problem is extended version of kadane's algorithm.

// Brute force: using 2 loops and 3 variables(maxScore, firstMin, secondMin) and innerloop will update the first and second minimum value.
// Time->O(N)

// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <limits.h>

// int findMaxScore(const std::vector<int>& arr) {
//     int n = arr.size();
//     if (n < 2) {
//         return 0;  // If the array has fewer than 2 elements, no valid subarray exists.
//     }

//     int maxScore = INT_MIN;

//     // Iterate over all starting points of the subarray
//     for (int i = 0; i < n - 1; ++i) {
//         // Initialize the first two smallest numbers with infinity
//         int firstMin = INT_MAX;
//         int secondMin = INT_MAX;

//         // Iterate over the end points of the subarray starting from i+1
//         for (int j = i; j < n; ++j) {
//             // Update the two smallest numbers in the current subarray
//             if (arr[j] < firstMin) {
//                 secondMin = firstMin;
//                 firstMin = arr[j];
//             } else if (arr[j] < secondMin) {
//                 secondMin = arr[j];
//             }

//             // Once we have at least two elements in the subarray, calculate the score
//             if (j > i) {
//                 int currentScore = firstMin + secondMin;
//                 maxScore = std::max(maxScore, currentScore);
//             }
//         }
//     }

//     return maxScore;
// }

// int main() {
//     std::vector<int> arr = {3, 1, 4, 1, 5};
//     std::cout << "Maximum score: " << findMaxScore(arr) << std::endl;
//     return 0;
// }


// Optimal: Modified kadane's algorithm

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

int findMaxScore(const std::vector<int>& arr) {
    int n = arr.size();
    if (n < 2) {
        return 0;  // If the array has fewer than 2 elements, no valid subarray exists.
    }

    // Initialize the two smallest numbers to maximum possible value
    int firstMin = INT_MAX;
    int secondMin = INT_MAX;

    // Initialize the maximum score to the smallest possible value
    int maxScore = INT_MIN;

    // Iterate through the array
    for (int i = 0; i < n; ++i) {
        // Update the two smallest numbers
        if (arr[i] < firstMin) {
            secondMin = firstMin;
            firstMin = arr[i];
        } else if (arr[i] < secondMin) {
            secondMin = arr[i];
        }

        // We can calculate the score only if we have at least two elements
        if (i > 0) {
            maxScore = std::max(maxScore, firstMin + secondMin);
        }
    }

    return maxScore;
}

int main() {
    std::vector<int> arr = {3, 1, 4, 1, 5};
    std::cout << "Maximum score: " << findMaxScore(arr) << std::endl;
    return 0;
}
