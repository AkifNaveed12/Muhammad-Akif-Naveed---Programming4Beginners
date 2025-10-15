#include <stdio.h>
#include <stdlib.h> // Necessary for malloc and free

int main() {
    
    // array size reading...
    int arrSize;
    if (scanf("%d", &arrSize) != 1 || arrSize <= 0) {
        // Handle invalid input 
        return 1;
    }

    // Allocate the required memory size
    int *arr = (int*)malloc(arrSize * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    int sum = 0;
    
    //  Read input 
    for (int i = 0; i < arrSize; i++) {
        // Read the i-th number directly into the i-th position of the array
        if (scanf("%d", &arr[i]) != 1) {
            // Handle incomplete input
            free(arr);
            return 1;
        }
        
        // Calculate the sum 
        sum = sum + arr[i];
    }
    
    printf("%d", sum);

    //  Free the memory 
    free(arr);
    
    return 0;
}
