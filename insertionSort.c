#include <stdio.h>
// Function to perform Insertion Sort
void insertionSort(int arr[], int n)
{
    int i, key, j;
    // Traverse through elements starting from the second element
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        // Move elements greater than key
               while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        // Insert the key at its correct position
        arr[j + 1] = key;
    }
}
// Function to print the array
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
// Main function
int main()
{
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nOriginal Array:\n");
    printArray(arr, n);
    insertionSort(arr, n);
    printf("\nSorted Array:\n");
    printArray(arr, n);
    return 0;
}