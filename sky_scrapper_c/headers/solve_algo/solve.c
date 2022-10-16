#include <stdio.h>
#include <stdlib.h>
#include "find_empty.c"


int	valid(unsigned int *clues, unsigned int **board, unsigned int num, unsigned int *pos);

int	solve(unsigned int *clues, unsigned int **board)
{
	unsigned int	*pos;
	unsigned int	row;
	unsigned int	col;
	unsigned int	i;

	pos = find_empty(board);
	i = 1;	
	if ((pos[0] == 99) && (pos[1] == 99))
	{
		return (1);	
	}
	else
	{
		row = pos[0];		
		col = pos[1];		
	}
	while (i < 5)
	{

		if (valid(clues, board, i, pos) == 1)
		{
			board[row][col] = i;
			// call solve recursively
			if (solve(clues, board) == 1)
				return (1);
			else
				board[row][col] = 0;
		}
	}
	return (0);
}
