#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>



int main()
{
	int index = 0;
	int row = 4;
	int col = 4;
	int i = 0;
	int j = 0; 
	int *c;
	
	int** mat = (int**)malloc(row * sizeof(int*));

	while (index < row)
	{
    		mat[index] = (int*)malloc(col * sizeof(int));
    		++index;
	}
	
	i = 0;
	j = 0;
 	
	while (i < row)
	{
        	while (j < col)
        	{
        		write(1, mat[i * col + j], 1);
            		j++;
        	}
        	printf("\n");
       	i++;
    	}
	
	free(mat);
}
