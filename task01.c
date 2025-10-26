#include <stdio.h>
int main () {
    int i;
    int sum = 0;
    int b = 0;
    printf("Enter number of values to sum: ");
    scanf("%d" , &b);
    int array[b];
    for (i = 0 ; i < b ; i++){
        printf("Enter %d value to sum: " , i );
        scanf("%d" , &array[i]);
        sum = sum + array[i];
    }
    printf("%d" , sum);
    return 0;
}

