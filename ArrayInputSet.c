// PROBLEM 2
#include <stdio.h>
#define SIZE 10 // A set of length being initialized for SETUP
int main(void) {
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
