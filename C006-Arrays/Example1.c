
#include <stdio.h>
#include <limits.h>

int main() {
	// 1. Print Arrays Value 
	int Marks[] = {22, 17, 14, 28, 17, 50, 24, 13, 0, 10};
	// Boring way 
	// printf("%d\n", Marks[0]);
	// printf("%d\n", Marks[1]);
	// printf("%d\n", Marks[2]);
	// printf("%d\n", Marks[3]);
	// printf("%d\n", Marks[4]);

	// printing Arrays Value with help of loop 
	for (int i = 0; i < sizeof(Marks) / sizeof(int); i++) {
	    printf("%d\n", Marks[i]);
	}


	// 2. Search min and max in the array 
	int arr[12] = {5, 11, 13, 4, 7, 16, 5, 6, 12, 8, 9, 10};

	// declaring variable for storing minimum and maximum value of array arr[] 
	int min = arr[0]; // assuming that minimum of the given array is at 0th element 
	int max = arr[0]; // assuming that maximum of the given array is at 0th element 

	for (int i = 1; i < sizeof(arr) / sizeof(int); i++) {
		// for finding minimum 
		if (min > arr[i]) {
			min = arr[i];
		}

		// for finding maximum 
		if (max < arr[i]) {
			max = arr[i];
		}
	}

	printf("Minimum of the array is %d\n", min);
	printf("Maximum of the array is %d\n", max);


	// 3. Search for an element in above arr[] 
	int for_search = 4*4;

	// searching the element 
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		if (arr[i] == for_search) {
			printf("Element %d found at index %d\n", for_search, i);
			break;
		}
	}


	// 4. Sort the given array arr[] in accending order using Selection sort algorithm 

	// Logic : Selection sort
	// In Selection sort we devide array into two parts
	// sorted part and un-sorted part
	// Initially in sorted part we have 0 elements
	// and rest in unsorted part
	// Then we traverse the array,
	// find the minimum/maximum element
	// then place it at the end of the sorted array

	// printing the given array (unsorted) 
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	// sorting the given array 
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		int minimum_element_index = i;

		for (int j = i+1; j < sizeof(arr) / sizeof(int); j++) {
			if (arr[minimum_element_index] > arr[j]) {
				minimum_element_index = j;
			}
		}

		// swapping the elements 
		int temp = arr[minimum_element_index];
		arr[minimum_element_index] = arr[i];
		arr[i] = temp;
	}

	// printing the sorted array 
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");


	return 0;
}
