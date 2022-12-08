// PROBLEM 1
#include <stdio.h>

int main (void){
    int SIZE;
    printf("Size of the Array: ");
    scanf("%d", &SIZE); // Set your own Size by Inputting # random numbers.

    int array[SIZE];
     for (int i = 0; i < SIZE; ++i)
    {
        printf("array[%d]=", i);
        scanf("%d", &array[i]);
    }

    printf("\n");
    for (int i = 0; i < SIZE; ++i)
    printf("array[%d] = %d\n", i, array[i]);

    return 0;
}