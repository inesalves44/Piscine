#include <stdio.h>
#include <stdlib.h>

// We return the pointer
int **get(int N, int M) /* Allocate the array */
{
    /* Check if allocation succeeded. (check for NULL pointer) */
    int i, **table;
    table = malloc(N*sizeof(int *));
    for(i = 0 ; i < N ; i++)
        table[i] = malloc( M*sizeof(int) );
    return table;
}

void free2Darray(int** p, int N) {
    int i;
    for(i = 0 ; i < N ; i++)
        free(p[i]);
    free(p);
}

int main(void)
{
    const int LENGTH = 1000000;
    int **p;
    p = get(LENGTH, 4);
    printf("ok\n");
    free2Darray(p ,LENGTH);
    printf("exiting ok\n");
    return 0;
}
