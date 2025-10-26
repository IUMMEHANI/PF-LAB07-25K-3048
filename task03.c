#include <stdio.h>
int main() {
    int i, j, n;
    printf("Enter number of elements of an array: ");
    scanf("%d", &n);
    int array[n];
    for (i = 0; i < n; i++) {
        printf("Enter value of element %d: ", i + 1);
        scanf("%d", &array[i]);
    }
    printf("\nARRAY PROVIDED IS: ");
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
    int found = 0;
    for (i = 0; i < n; i++) {
        int count = 0;
        for (j = 0; j < n; j++) {
            if (array[i] == array[j])
                count++;
        }
        if (count > 1) {
            int already_printed = 0;
            for (j = 0; j < i; j++) {
                if (array[i] == array[j]) {
                    already_printed = 1;
                    break;
                }
            }
            if (!already_printed) {
                printf("Number %d occurred more than once in the provided array.\n", array[i]);
                found = 1;
            }
        }
    }
    if (!found)
        printf("No number occurs more than once in the provided array.\n");
    return 0;
}

