#include <stdio.h>
int main() {
    int arr[10], num, i;
    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter number to search: ");
    scanf("%d", &num);
    for (i = 0; i < 10; i++) {
        if (arr[i] == num) {
            printf("Number %d found at index %d.\n", num, i);
            return 0;  
        }
    }
    printf("Number %d not found in the array.\n", num);
    return 0;
}

