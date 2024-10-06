#include <stdio.h>


int findPivot(int arr[], int low, int high) {
    
    if (high < low) {
        return -1;  
    }
    if (high == low) {
        return low;  
    }

    int mid = (low + high) / 2;

    
    if (mid < high && arr[mid] > arr[mid + 1]) {
        return mid + 1;
    }

    
    if (mid > low && arr[mid] < arr[mid - 1]) {
        return mid;
    }

    
    if (arr[low] >= arr[mid]) {
        return findPivot(arr, low, mid - 1);
    }

    return findPivot(arr, mid + 1, high);
}

int main() {
    int arr[] = {7,19,61,1,3,9,10,5}; 
    int n = sizeof(arr) / sizeof(arr[0]);

    int pivotIndex = findPivot(arr, 0, n - 1);

    if (pivotIndex == -1) {
        printf("The array is not rotated.\n");
    } else {
        printf("The pivot element is %d at index %d\n", arr[pivotIndex], pivotIndex);
    }

    return 0;
}