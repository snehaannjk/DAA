# DAA
Insertion Sort in C

Description

This program implements the Insertion Sort algorithm in C to sort an array of integers in ascending order. It takes the number of elements and array elements as input from the user, displays the original array, sorts it, and prints the sorted array.

Features

- Accepts array elements from the user.
- Displays the original array.
- Sorts elements in ascending order using Insertion Sort.
- Displays the sorted array.

Algorithm

1. Start from the second element of the array.
2. Store the current element in a variable called "key".
3. Compare the key with the elements before it.
4. Shift all elements greater than the key one position to the right.
5. Insert the key into its correct position.
6. Repeat until all elements are sorted.
7. Display the sorted array.

Functions Used

- "insertionSort(int arr[], int n)" – Sorts the array using insertion sort.
- "printArray(int arr[], int n)" – Prints the array elements.
- "main()" – Accepts input, displays the original array, calls the sorting function, and displays the sorted array.

Time and Space Complexity

- Best Case: O(n) — when the array is already sorted.
- Average Case: O(n²).
- Worst Case: O(n²) — when the array is in reverse order.
- Space Complexity: O(1) auxiliary space.

Requirements

- A C compiler such as GCC.
- A terminal or command prompt.

How to Compile and Run

Save the source code as "insertion_sort.c".

Compile using GCC:

gcc insertion_sort.c -o insertion_sort

Run the program:

./insertion_sort

On Windows, run:

insertion_sort.exe

Sample Input

Enter the number of elements: 5
Enter the elements:
5 2 4 1 3

Sample Output

Original Array:
5 2 4 1 3

Sorted Array:
1 2 3 4 5

Conclusion

Insertion Sort is a simple sorting algorithm that builds a sorted array one element at a time. It is easy to understand and works efficiently for small or nearly sorted arrays.