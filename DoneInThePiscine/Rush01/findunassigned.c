#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

int FindUnassignedLocation(
    int **grid, int row, int col)
{
	if (grid[col][row] == 0)
                return 1;
	return 0;
}

int	**create_matriz()
{
	int	i;
	
	int j = 0;

	int	**matriz;
   
	matriz = malloc(4 * sizeof(int*));
	
	i = -1;
	while (++i < 4)
	{
		matriz[i] = malloc(4 * sizeof(int));
	}
	i = -1;
	while (++i < 4)
	{
		matriz[i][j] = 0;
		j++;
	}
	matriz[1][3] = 1;
	return (matriz);
}

void	print_matriz(int **matriz)
{
	for(int i = 0; i < 4;i++)
	{
		for (int j = 0; j < 4; j++)
		{	
			printf("%d",matriz[i][j]);
		}
		printf("\n");
	}
}


int main()
{
	int str[17] = {4,3,2,1,1,2,2,2,4,3,2,1,1,2,2,2,'\0'};
	int index = 0;
	int row = 4;
	int col = 4;
	int i = 0;
	int j = 0;
	int **mat;
	mat = create_matriz();
	
	print_matriz(mat);
	
	row = 0;
 	col = 0;
 	
 	while (col < 4)
 	{
 		while(row < 4)
 		{
 			if(FindUnassignedLocation(mat, row, col) == 0)
 				i = i + 1;
 			row++;	
 		}
 		col++;
 		row = 0;
 	}
	
	if (i == 16)
	{
		return (1);
	}	
			
	printf("%d", i);
	

	
}
