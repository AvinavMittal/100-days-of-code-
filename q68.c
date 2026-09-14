#include <stdio.h>

int main() {
    int n, i, position;
    int arr[100];

    scanf("%d", &n);

    // Read array elements
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Read position to delete
    scanf("%d", &position);

    // Shift elements to the left
    for (i = position; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    n--;

    // Print updated array
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}