#include <stdio.h>

void print_array(int *a, int n) {
    if (n <= 0) {
        return;  // No elements to print
    }
    
    // Print the first element
    printf("%d", a[0]);

    // Print the remaining elements
    for (int i = 1; i < n; i++) {
        printf(", %d", a[i]);
    }

    printf("\n");  // Print a new line
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    print_array(arr, size);

    return 0;
}
