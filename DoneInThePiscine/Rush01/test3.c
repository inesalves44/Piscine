#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
      
int FindUnassignedLocation(
    int **grid, int row, int col)
{
	if (grid[col][row] != 0)
                return 1;
	return 0;
}


int UsedInRow(int **grid, int row, int num)
{
	int col = 0;

	while (col < 4)
	{
		if (grid[row][col] == num)
			return 1;
		col++;
	}
	return 0;
}
 

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

int numstr_G1(int **grid,  int row, int col, int num, int i)
{
	if (i == 4 && num != (row + 1))
		return 0;
	else if(i == 1 && num != 4 && row == 0)
		return 0;
	else if(i == 2 && num == 4 && row == 0)
		return 0;
	else if(i == 3 && num == 3 && row == 0)
		return 0;
	else if(i == 3 && num == 4 && (row == 0 || row == 1))
		return 0;
	else
		return 1;
}
int numstr_G2(int **grid,  int row, int col, int num, int i)
{
	if (i == 4 && num == 1 && row != 3)
		return 0;
	else if (i == 4 && num == 2 && row != 2)
		return 0;
	else if (i == 4 && num == 3 && row != 1)
		return 0;
	else if (i == 4 && num == 4 && row != 0)
		return 0;
	else if(i == 1 && num == 4 && row != 3)
		return 0;
	else if(i == 2 && num == 4 && row == 3)
		return 0;
	else if(i == 3 && num == 3 && row == 3)
		return 0;
	else if(i == 3 && num == 4 && (row == 3 || row == 2))
		return 0;
	else
		return 1;
}

int numstr_G3(int **grid,  int row, int col, int num, int i)
{
	if (i == 4 && num != (col + 1))
		return 0;
	else if(i == 1 && num == 4 && col != 0)
		return 0;
	else if(i == 2 && num == 4 && col == 0)
		return 0;
	else if(i == 3 && num == 3 && col == 0)
		return 0;
	else if(i == 3 && num == 4 && (col == 0 || col == 1))
		return 0;
	else
		return 1;
}
int numstr_G4(int **grid,  int row, int col, int num, int i)
{
	if (i == 4 && num == 1 && col != 0)
		return 0;
	else if (i == 4 && num == 2 && col != 2)
		return 0;
	else if (i == 4 && num == 3 && col != 1)
		return 0;
	else if (i == 4 && num == 4 && col != 0)
		return 0;
	else if(i == 1 && num == 4 && col != 3)
		return 0;
	else if(i == 2 && num == 4 && col == 3)
		return 0;
	else if(i == 3 && num == 3 && col == 3)
		return 0;
	else if(i == 3 && num == 4 && (col == 3 || col == 2))
		return 0;
	else
		return 1;
}

int isSafe(int **grid, int row, int col, int num, int i, int g)
{
	if(UsedInRow(grid, row, num) == 1)
		return 0;
	if(UsedInCol(grid, col, num) == 1)
		return 0;
	if(grid[row][col] != 0)
		return 0;
		
	if (g == 0)
	{
		if(numstr_G1(grid,  row, col, num, i) == 1)
			return 1;
	}
	else if (g == 1)
	{
		if(numstr_G2(grid,  row, col, num, i) == 1)
			return 1;
	}
	else if(g == 2)
	{
		if(numstr_G3(grid,  row, col, num, i) == 1)
			return 1;
	}
	else if(g == 3)
	{
		if(numstr_G4(grid,  row, col, num, i) == 1)
			return 1;
	}
	else 
		return 0;	
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


int make_sky(int **grid, int *str)
{	
	 int	row;
	 int	col;
	 int	num;
	 int	i;
	 int 	g;
 	
 	row = 0;
 	col = 0;
 	
 	while (col < 4)
 	{
 		while(row < 4)
 		{
 			if(FindUnassignedLocation(grid, row, col) == 1)
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
	
 	row = 0;
 	col = 0;
 	num = 1;
	i = 0;

	while (str[i] != '\0')
	{	
    		while (col < 4)				
    		{
    			while(num >= 4 && row < 4)
    			{
    				g = i / 4;
    				if (isSafe(grid, row, col, num, str[i], g) == 1)            
					grid[row][col] = num;
    				num++;
    				row++;
    			}
    			col++;
    		}	
		i++;
	}
	
	print_matriz(grid);
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
	
	return (matriz);
}


int main()
{
	int str[17] = {4,3,2,1,1,2,2,2,4,3,2,1,1,2,2,2, '\0'};
	int row = 4;
	int col = 4;
	int i = 0;
	
	int **mat;
	mat = create_matriz();

	if(make_sky(mat, str) == 1)
		print_matriz(mat);
	else
		"no possible solutions";
}
