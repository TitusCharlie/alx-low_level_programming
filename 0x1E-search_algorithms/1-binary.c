#include <stdio.h>  // for printf
#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 *                  using the Binary search algorithm
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index where value is located, or -1 if not found or array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
        return -1;

    size_t left = 0;
    size_t right = size - 1;
    size_t mid;

    while (left <= right)
    {
        mid = (left + right) / 2;

        printf("Searching in array: ");
        for (size_t i = left; i <= right; i++)
        {
            printf("%d", array[i]);
            if (i < right)
                printf(", ");
            else
                printf("\n");
        }

        if (array[mid] == value)
            return (int)mid;
        else if (array[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;  // value not found
}

