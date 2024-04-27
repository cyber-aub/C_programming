#include <stdio.h>

void separateNegativePositive(int arr[], int n) {
    int left = 0, right = n - 1;

    while (left <= right) {
        // Find the first positive value from the left
        while (arr[left] < 0 && left < right)
            left++;

        // Find the first negative value from the right
        while (arr[right] >= 0 && left < right)
            right--;

        // Swap the positive value from the left and the negative value from the right
        if (left < right) {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    separateNegativePositive(arr, n);

    printf("Array after separating negative and positive values: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}