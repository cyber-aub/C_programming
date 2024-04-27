#include <stdio.h>

#define MAX_SIZE 100

// function to find the minimum, maximum and average of the elements of the array

void findMinMaxAvg(int T[], int N, int *min, int *max, double *avg) {
    int sum = 0;
    *min = *max = T[0]; // Initialize min and max with the first element

    for (int i = 0; i < N; i++) {
        sum += T[i];
        *min = (T[i] < *min) ? T[i] : *min; // Update min using ternary operator
        *max = (T[i] > *max) ? T[i] : *max; // Update max using ternary operator
    }

    *avg = (double)sum / N;
}

int main() {
    int T[MAX_SIZE], N;
    printf("Enter the number of elements in the vector (N <= 100): ");
    scanf("%d", &N);

    printf("Enter the elements of the vector:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &T[i]);
    }

    int min, max;
    double avg;
    findMinMaxAvg(T, N, &min, &max, &avg);
    printf("Minimum: %d, Maximum: %d, Average: %.2f\n", min, max, avg);

    return 0;
}