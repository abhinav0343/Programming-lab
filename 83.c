#include <stdio.h>

int findmax(int,int);

int main() {
    int n;
    
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    
    int maxValue = findMax(arr, n);
    printf("The maximum element in the array is: %d\n", maxValue);
    
    return 0;
}
int findMax(int arr[], int n) {
    int max = arr[0];  
    for(int i = 1; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];  
        }
    }
    return max;
}