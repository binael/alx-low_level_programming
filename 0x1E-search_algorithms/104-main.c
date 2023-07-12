#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
    int array[] = {
        5, 5, 6
    };
    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n\n", 8, advanced_binary(array, size, 5));
    printf("Found %d at index: %d\n\n", 5, advanced_binary(array, size, 6));
    printf("Found %d at index: %d\n", 999, advanced_binary(array, size, -1));
    return (EXIT_SUCCESS);
}