#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 10;  // Size of the array
    char *array = (char *)malloc(10 * sizeof(char));  // Allocating memory for n characters

    // Check if memory allocation was successful
    if (array == NULL) {
        printf("Memory allocation failed!\n");
        return 1;  // Exit with error code
    }

    // Initialize and print the array (optional)
    for (int i = 0; i < n; i++) {
        array[i] = 'A';  // Fill array with some characters
    }

    // Print the array
    printf("Array contents: ");
    for (int i = 0; i < n; i++) {
        printf("%c ", array[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(array);

    return 0;
}
