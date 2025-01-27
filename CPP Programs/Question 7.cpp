#include <stdio.h>

int main() {
    int arr1[100];
    int arr2[100];
    int l1, sum = 0;

    // Input array size
    printf("Enter the number of elements to be stored in the array (max 100): ");
    scanf("%d", &l1);

    // Validate array size
    if (l1 > 100 || l1 <= 0) {
        printf("Invalid array size. Please enter a number between 1 and 100.\n");
        return 1;
    }

    // Input array elements
    printf("Enter the %d elements of the array:\n", l1);
    for (int i = 0; i < l1; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    // Copy elements from arr1 to arr2
    for (int j = 0; j < l1; j++) {
        arr2[j] = arr1[j];
    }

    // Print copied elements
    printf("The elements copied into the second array are:\n");
    for (int i = 0; i < l1; i++) {
        printf("Element at index %d: %d\n", i, arr2[i]);
    }

    // Calculate the sum of even numbers
    for (int i = 0; i < l1; i++) {
        if (arr2[i] % 2 == 0) {
            sum += arr2[i];
        }
    }

    // Print the sum of even numbers
    printf("The sum of even numbers is: %d\n", sum);

    return 0;
}
