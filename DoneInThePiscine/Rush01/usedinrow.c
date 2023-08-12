#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

int UsedInCol(int **grid, int col, int num)
{
	int	row = 0;

	while (row < 4)
	{    
		if (grid[row][col] == num)
			return 1;
		row++;
	}
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
	
	
	matriz[0][1] = 2;
	matriz[0][2] = 3;
	matriz[0][3] = 4;
	matriz[1][0] = 2;
	matriz[1][1] = 3;
	matriz[1][2] = 4;
	matriz[1][3] = 1;
	matriz[2][0] = 3;
	matriz[2][1] = 4;
	matriz[2][2] = 1;
	matriz[2][3] = 2;
	matriz[3][0] = 4;
	matriz[3][1] = 1;
	matriz[3][2] = 2;
	matriz[3][3] = 3;
	
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
	int **mat;
	mat = create_matriz();
	int i;
	
	print_matriz(mat);
 	
 	i = UsedInCol(mat, 0, 4);
 		
			
	printf("%d", i);	
	
	
	
		if(make_sky(mat, str) == 1)
		print_matriz(mat);
}

while (str[i] != '\0')
    				{ 
    					g = i / 4;
    					if (isSafe(grid, row, col, num, str[i], g) == 1)
					{             
						grid[row][col] = num;
 						if (make_sky(grid, str) == 1)
 							return 1;
 						grid[row][col] = 0;
 					}
    					
 					i++;
 					
 					
 					while (num <= 4)
	{
		
    		while (row < 4)
    		{ 
    			
    			while (col < 4)
    			{
    				while (str[i] != '\0')
    				{	
    					g = i / 4;
    					if (isSafe(grid, row, col, num, test, g) == 1)
					{             
						grid[row][col] = num;
 						if (make_sky(grid, str) == 1)
 							return 1;
 						grid[row][col] = 0;
 					}
    					
 					i++;
 				}
 				col++;
			}
			row++;
			col = 0;
		}
		num++;
		row = 0;
		col = 0;
	}
	
	if (make_sky(grid, str) == 1)
 							return 1;
 						else
 							grid[row][col] = 0;
