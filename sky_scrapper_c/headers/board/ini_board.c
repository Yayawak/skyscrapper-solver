#include <stdio.h>
#include <stdlib.h>

unsigned int	**ini_board(unsigned int N)
{
		unsigned int	i;
		unsigned int	j;
		unsigned int	**board;
		/* void 	**board; */
		/* board = malloc(sizeof(unsigned int*) * N); */
		board = (unsigned int**)malloc(4 *  4);

		i = 0;
		while (i < N)
		{
			/* printf("i = %d\n---------------\n", i); */
				board[i] = (unsigned int*)malloc(sizeof(unsigned int*) * 4);
			j = 0;
				while (j < N)
				{
						/* printf("j = %d\t---------------\t", j); */
						board[j] = (unsigned int*)malloc(sizeof(unsigned int) * 4);
						board[i][j] = 0;
						/* printf("board[%d,%d] = %d\n", i, j, board[i][j]); */
						j++;
				}
				i++;
		}
		return (board);
}
