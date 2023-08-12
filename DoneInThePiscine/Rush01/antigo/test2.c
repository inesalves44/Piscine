#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
    int r = 4;
    int c = 4;
    int i = 0;
    int j = 0;
 	
    int* ptr = malloc((r * c) * sizeof(int));
 	
    /* Putting 1 to 12 in the 1D array in a sequence */
    while(i < (r * c))
    {    ptr[i] = i + 1;
        i++;
    }
 	i = 0;
    /* Accessing the array values as if it was a 2D array */
    while (i < r) {
        while (j < c)
        {
            printf("%d ", ptr[i * c + j]);
            j++;
        }
        printf("\n");
        i++;
    }
 
    free(ptr);
 
    return 0;
}
