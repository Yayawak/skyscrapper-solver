#include <stdio.h>
#include <stdlib.h>

/* int	**ini_board(int	N) */
/* unsigned int	***ini_board(unsigned int N) */
typedef struct 
{
		unsigned int	**data;
		/* unsigned int	data[4][4]; */
} arr2d;

arr2d	ini_board(unsigned int N)
/* unsigned int	**ini_board(unsigned int N) */
{
		unsigned int	i;
		unsigned int	j;
		/* unsigned int	board[N][N]; */
		/* unsigned int	**board; */
		arr2d	grid;
		/* unsigned int	***p; */
		
		/* board = malloc(N*N); */
		/* board = malloc(sizeof(unsigned int*) * N); */
		/* board = malloc(sizeof(unsigned int*) *  4); */
		grid.data = malloc(sizeof(unsigned int*) *  4);
		i = 0;
		j = 0;
		while (i < N)
		{
				/* board[i] = malloc(sizeof(unsigned int*) * 4); */
				grid.data[i] = malloc(sizeof(unsigned int*) * 4);
				while (j < N)
				{

						// important
						/* board[j] = malloc(sizeof(unsigned int*) * 4); */
						grid.data[j] = malloc(sizeof(unsigned int*) * 4);
						/* printf("[%d,%d]\n", i, j); */
						grid.data[i][j] = 0;
						/* board[i][j] = 0; */
						j++;
				}
				i++;
		}

		return (grid);
		/* return (rows); */
}

/* int	main(int argc, char **argv) */
void	print_2d_array(unsigned int **arr, unsigned int N)
{
		unsigned int	i;
		unsigned int	j;

		i = 0;
		j = 0;
		while (i < N)
		{
				while (j < N)
				{
						printf("(%d,%d)\t", i, j);
						j++;
				}
				printf("\n");
				i++;
		}
}
int	main(void)
{
		printf("Here");
		/* unsigned int	clues[] = {2, 2, 1, 3, */
		/* unsigned int	*clues = {2, 2, 1, 3, */
		/* 2, 2, 3, 1, */
		/* 1, 2, 2, 3, */
		/* 3, 2, 1, 3}; */
		unsigned int	N;
		/* unsigned int	**board; */
		arr2d	board;

		N = 4;
	   
		board = ini_board(N);

		/* printf("Pointer of initial board : %p\n", board); */
		printf("Pointer of initial board : %p\n", &board);
		printf("=========================\n");
		print_2d_array(board.data, N);
		/* ini_board(N); */

		return (0);
}
