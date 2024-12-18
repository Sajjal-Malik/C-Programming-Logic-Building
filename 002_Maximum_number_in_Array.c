#include <stdio.h>

int findMax(int arr[], int n) {
  
    // Assume first element as minimum
    int max = arr[0];
    for (int i = 1; i < n; i++) {
      
      	// Update m if arr[i] is smaller
        if (arr[i] > max) {
            max = arr[i]; 
        }
    }
    return max;
}

int main() {
    int arr[] = {5, 2, 7, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
	
  	// Find and print minimum value in arr
    printf("%d\n", findMax(arr, n));
  
    return 0;
}