//============================================================================
// Name        : task1.cpp
// Author      : Omar Sherif
// Version     : 1.0
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;

// Function to find the minimum subtraction (absolute difference) using brute force
int findMinSubtractionBruteForce(int arr[], int n) {
    // Initialize min_diff to a large value
    int min_diff = INT_MAX;

    // Iterate through all pairs of elements
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            // Calculate the absolute difference
            int diff = abs(arr[i] - arr[j]);

            // Update min_diff if the new difference is smaller
            if (diff < min_diff) {
                min_diff = diff;
            }
        }
    }

    // Return the minimum difference found
    return min_diff;
}
// Main function to test the algorithms
int main() {
    // Example array
    int arr[] = {1, 5, 3, 19, 18, 25};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    // Call the brute force function
    int resultBruteForce = findMinSubtractionBruteForce(arr, n);
    cout << "Minimum subtraction (difference) using brute force: " << resultBruteForce << endl;

    return 0;
}
