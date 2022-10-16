#include <stdio.h>
//#include "structs.c"
#include <stdlib.h>

arr2d	ini_board(unsigned int N)
{
		unsigned int	i;
		unsigned int	j;
		unsigned int	k;

		arr2d	grid;
		
		grid.data = malloc(sizeof(unsigned int*) *  N * N);
		/* grid.data = malloc(sizeof(void *) *  N); */
		/* unsigned int	*p = malloc(sizeof(unsigned int*) * N); */
		unsigned long	*p = malloc(sizeof(unsigned int*) * N);
		/* grid.data = malloc(&p); */
		grid.data = malloc(*p);
		i = 0;
		k = 1000;
		while (i < N)
		{
			/* printf("i = %d\n---------------\n", i); */
			grid.data[i] = malloc(k);
			j = 0;
				while (j < N)
				{
						/* printf("j = %d\t---------------\t", j); */
						/* grid.data[j] = malloc(sizeof(unsigned int*) * 4); */
						grid.data[j] = malloc(k);
						grid.data[i][j] = 0;
						/* printf("board[%d,%d] = %d\n", i, j, grid.data[i][j]); */
						j++;
				}
				i++;
		}
		return (grid);
}
