#include <stdio.h>

int main() {
    int n, i, minimum;

    printf("Enter number: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter values: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    minimum = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] < minimum) {
            minimum = arr[i];
        }
    }

    printf("Minimum number is %d\n", minimum);
    return 0;
}
