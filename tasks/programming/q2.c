#include <stdio.h>

// Solved using merge sort(log(n))
// Function to merge two halves of the array
void merge(int array[], int left, int mid, int right)
{
    int i, j, k;
    int n1 = mid - left + 1; // Size of the left subarray
    int n2 = right - mid;    // Size of the right subarray

    int leftArray[n1], rightArray[n2];

    for (i = 0; i < n1; i++)
        leftArray[i] = array[left + i];

    for (j = 0; j < n2; j++)
        rightArray[j] = array[mid + 1 + j];

    // Merge the temporary arrays back into array[left..right]
    i = 0;
    j = 0;
    k = left;
    while (i < n1 && j < n2)
    {
        if (leftArray[i] <= rightArray[j])
        {
            array[k] = leftArray[i];
            i++;
        } 

        else
        {
            array[k] = rightArray[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of leftArray[], if any
    while (i < n1)
    {
        array[k] = leftArray[i];
        i++;
        k++;
    }

    // Copy the remaining elements of rightArray[], if any
    while (j < n2)
    {
        array[k] = rightArray[j];
        j++;
        k++;
    }
}

// Function to implement Merge Sort
void mergeSort(int array[], int left, int right)
{
    if (left < right)
    {
        int mid = left + (right - left) / 2;

        mergeSort(array, left, mid);
        mergeSort(array, mid + 1, right);

        // Merge the sorted halves
        merge(array, left, mid, right);
    }
}

// Function to print an array
void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

//Funtion for to take an array as user input
void inputArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter the array element: ");
        scanf("%d", &array[i]);
    }
}

int main()
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    int array[size];
    
    inputArray(array,size);

    printf("Unsorted array: \n");
    printArray(array, size);

    mergeSort(array, 0, size - 1);

    printf("Sorted array: \n");
    printArray(array, size);
    
    return 0;
}
