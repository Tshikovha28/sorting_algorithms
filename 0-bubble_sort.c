#include "sort.h"
#include <stdio.h>

/**
 * swap - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap(int *a, int *b)
{
int tmp = *a;
*a = *b;
*b = tmp;
}

/**
 * bubble_sort - Sort an array of integers in ascending order.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 *
 * Description: Print the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
size_t i, len = size;
int bubbly = 0;

if (array == NULL || size < 2)
return;

while (bubbly == 0)
{
bubbly = 1;
for (i = 0; i < len - 1; i++)
{
if (array[i] > array[i + 1])
{
swap(array + i, array + i + 1);

/*Print the array after each swap*/
printf("Swap: %d <--> %d\n", array[i], array[i + 1]);
for (size_t k = 0; k < size; k++)
{
printf("%d ", array[k]);
}
printf("\n");

bubbly = 0;
}
}
len--;
}
}

