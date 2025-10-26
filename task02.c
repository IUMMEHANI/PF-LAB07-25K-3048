#include <stdio.h>
int main () {
    int i,j;
    int b = 0;
    printf("Enter number of values you want to reverse: ");
    scanf("%d" , &b);
    int array[b];
    for (i = 0 ; i < b ; i++){
       printf("Enter %d value : " , i );
       scanf("%d" , &array[i]);
    }
    for (j = b-1 ; j >= 0 ; j--){
       printf("%d " , array[j]);
    }
    return 0;
}

