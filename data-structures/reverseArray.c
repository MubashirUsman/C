#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int size;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    int *number = (int *)malloc(size * sizeof(int));
    if (number == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        return 1; // Error code indicating failure
    }

    printf("Enter %d numbers:\n", size);
    for (size_t i = 0; i < size; i++)
    {
        scanf("%d", &number[i]);
    }

    // Do something with the entered numbers...

    free(number); // Don't forget to free the allocated memory when you're done using it.
    return 0;
}
