#include <stdio.h>
#include <stdlib.h>
#include "structs.c"
#include 
#ifndef
#define ...

int	main(void)
{
		/* unsigned int	clues[] = {2, 2, 1, 3, */
		/* unsigned int	*clues = {2, 2, 1, 3, */
		/* 2, 2, 3, 1, */
		/* 1, 2, 2, 3, */
		/* 3, 2, 1, 3}; */
		unsigned int	N;
		arr2d	board;

		N = 4;
		board = ini_board(N);

		printf("=========================\n");
		print_2d_array(board.data, N);

		return (0);
}
#endif
