#include <stdio.h>

#define MAX_SIZE 100

// function to find the positions of a value in an array

void findPositions(int T[], int N, int value, int *positions, int *numPositions) {
    *numPositions = 0; // Initialize the number of positions to 0

    for (int i = 0; i < N; i++) {
        if (T[i] == value) {
            positions[*numPositions] = i; // Store the position (index) in the positions array
            (*numPositions)++;            // Increment the number of positions
        }
    }
}

int main() {
    int T[MAX_SIZE], N, value;
    int positions[MAX_SIZE];
    int numPositions;

    printf("Enter the number of elements in the vector (N <= 100): ");
    scanf("%d", &N);

    printf("Enter the elements of the vector:\n");
    for (int i = 0; i < N; i++) {
        scanf("%d", &T[i]);
    }

    printf("Enter the value to search for: ");
    scanf("%d", &value);

    findPositions(T, N, value, positions, &numPositions);

    if (numPositions == 0) {
        printf("The value %d does not appear in the vector.\n", value);
    } else {
        printf("The value %d appears at the following positions: ", value);
        for (int i = 0; i < numPositions; i++) {
            printf("%d ", positions[i]);
        }
        printf("\n");
    }

    return 0;
}