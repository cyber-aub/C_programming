#include <stdio.h>
#include <stdbool.h>

// Function to check if a year is a leap year
bool isLeapYear(int year) {
    
    if (year % 100 == 0)
        return false;

    if (year % 4 == 0)
        return true;

    if (year % 400 == 0)
        return true;

    return false;
}

int main() {
    int year;
    
    // Ask the user for a year
    printf("Enter a year: ");
    scanf("%d", &year);

    // Check if the year is a leap year
    if (isLeapYear(year)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}