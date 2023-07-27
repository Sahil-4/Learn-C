
#include <stdio.h>


int main() {
    // 1. Print Array Values
    int Marks[] = {22, 17, 14, 28, 17, 50, 24, 13, 0, 10};
    // Printing Array Values with the help of a loop
    for (int i = 0; i < sizeof(Marks) / sizeof(int); i++) {
        printf("%d\n", Marks[i]);
    }


    // 2. Find Minimum and Maximum in the Array
    int arr[12] = {5, 11, 13, 4, 7, 16, 5, 6, 12, 8, 9, 10};

    // Initializing variables to store the minimum and maximum values of the array
    int min = arr[0]; // Assuming that the minimum of the given array is at index 0
    int max = arr[0]; // Assuming that the maximum of the given array is at index 0

    for (int i = 1; i < sizeof(arr) / sizeof(int); i++) {
        // For finding the minimum
        if (min > arr[i]) {
            min = arr[i];
        }

        // For finding the maximum
        if (max < arr[i]) {
            max = arr[i];
        }
    }

    printf("Minimum of the array is %d\n", min);
    printf("Maximum of the array is %d\n", max);


    // 3. Search for an Element in the above arr[]
    int for_search = 4 * 4;

    // Searching for the element
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
        if (arr[i] == for_search) {
            printf("Element %d found at index %d\n", for_search, i);
            break;
        }
    }


    // 4. Sort the given array arr[] in ascending order using Selection sort algorithm

    // Logic : Selection sort
    // In Selection sort, we divide the array into two parts
    // - sorted part and unsorted part
    // Initially, the sorted part has 0 elements, and the rest is in the unsorted part
    // Then, we traverse the array, find the minimum/maximum element
    // and place it at the end of the sorted array

    // Printing the given array (unsorted)
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Sorting the given array
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
        int minimum_element_index = i;

        for (int j = i + 1; j < sizeof(arr) / sizeof(int); j++) {
            if (arr[minimum_element_index] > arr[j]) {
                minimum_element_index = j;
            }
        }

        // Swapping the elements
        int temp = arr[minimum_element_index];
        arr[minimum_element_index] = arr[i];
        arr[i] = temp;
    }

    // Printing the sorted array
    for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");


    return 0;
}
