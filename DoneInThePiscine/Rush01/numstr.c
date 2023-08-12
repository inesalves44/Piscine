#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>


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
	
	matriz[0][0] = 1;
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
 	
 	i = numstr_G3(mat, 0, 0, 3, 3);
 		
			
	printf("%d", i);	
}

