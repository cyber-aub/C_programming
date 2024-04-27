

// C program to illustrate the use of sizeof operator in C

#include <stdio.h>

// function to print array
void printArray(int arr[], int size)
{
	printf("Array Elements: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
}

// driver code
int main()
{
	int arr[8] = { 12, 4, 5, 3, 7, 8, 11, 45 };

	// getting the size of array
	int size = sizeof(arr) / sizeof(arr[0]);
// dont forget that sizeof operator gives you the size in bytes so you must deduce the actual size in decimal 
	printArray(arr, size);

	return 0;
}

//-------------------------------------------------------------------------------------------------------------------
// C Program to print the string using a function


// function to print the string
void printString(char* str)
{
	printf("Array of Characters: ");

	int i = 0;
	while (str[i] != '\0') {
		printf("%c ", str[i]);
		i++;
	}
}

// Driver program
int main()
{
	char arr[] = "String";

	printString(arr);

	return 0;
}
