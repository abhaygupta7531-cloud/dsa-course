#include <stdio.h>

#define MAX 100

// Function declarations
void printArray(const int arr[], int n);
int deleteByIndex(int arr[], int n, int pos);
int deleteByValue(int arr[], int n, int value);

int main(void) {
    int array[MAX] = {10, 20, 30, 40, 50};
    int n = 5;
    int choice, pos, value;

    do {
        printf("\n=== Array Deletion Menu ===\n");
        printf("1. Print array\n");
        printf("2. Delete element by index\n");
        printf("3. Delete element by value (first occurrence)\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Exiting program.\n");
            break;
        }

        switch (choice) {
            case 1:
                printArray(array, n);
                break;

            case 2:
                if (n == 0) {
                    printf("Array is already empty.\n");
                    break;
                }
                printf("Enter index to delete (0 to %d): ", n - 1);
                scanf("%d", &pos);
                n = deleteByIndex(array, n, pos);
                break;

            case 3:
                if (n == 0) {
                    printf("Array is already empty.\n");
                    break;
                }
                printf("Enter value to delete: ");
                scanf("%d", &value);
                n = deleteByValue(array, n, value);
                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid choice! Enter 1 to 4.\n");
        }
    } while (choice != 4);

    return 0;
}

// Prints all active elements in the array
void printArray(const int arr[], int n) {
    if (n == 0) {
        printf("Array is empty.\n");
        return;
    }

    printf("Current array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Deletes element at 'pos' by shifting elements left and returns updated count n
int deleteByIndex(int arr[], int n, int pos) {
    if (pos < 0 || pos >= n) {
        printf("Invalid index! Valid range is 0 to %d.\n", n - 1);
        return n;
    }

    int removed = arr[pos];
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;

    printf("Removed %d from index %d.\n", removed, pos);
    return n;
}

// Finds first occurrence of 'value', shifts elements left, and returns updated count n
int deleteByValue(int arr[], int n, int value) {
    int pos = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == value) {
            pos = i;
            break;
        }
    }

    if (pos == -1) {
        printf("Value %d not found in the array.\n", value);
        return n;
    }

    int removed = arr[pos];
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    n--;

    printf("Removed %d (found at index %d).\n", removed, pos);
    return n;
}