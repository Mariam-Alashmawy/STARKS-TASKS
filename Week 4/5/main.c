#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10];
    int i, n, original = 0, arr_reversed = 0;
    printf("Enter the number of digits: ");
    scanf("%d", &n);
    printf("Enter %d digits:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        original = original * 10 + arr[i];
    }
    for (i = n - 1; i >= 0; i--) {
        arr_reversed = arr_reversed * 10 + arr[i];
    }
    printf("Original number: %d\n", original);
    printf("Reversed number: %d\n", arr_reversed);
    if (original == arr_reversed)
        printf("The number is a palindrome.\n");
    else
        printf("The number is not a palindrome.\n");
    return 0;
}
