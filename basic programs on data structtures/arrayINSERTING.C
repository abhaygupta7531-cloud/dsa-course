#include <stdio.h>

int main(void)
{
    int array[10] = {10, 20, 30, 40, 50};
    int n = 5;
    int pos = 2;      // Insert at index 2
    int element = 25;
    int i;

    printf("Before insertion:\n");

    for (i = 0; i < n; i++)
        printf("%d ", array[i]);

    // Shift elements one position to the right
    for (i = n - 1; i >= pos; i--)
        array[i + 1] = array[i];

    array[pos] = element;
    n++;

    printf("\nAfter insertion:\n");

    for (i = 0; i < n; i++)
        printf("%d ", array[i]);

    return 0;
}