#include <stdio.h>
#include <stdlib.h>

unsigned int	*get_rev_arr(unsigned int *tab, unsigned int size)
{
	int	i = 0;
	unsigned int	*tmp_arr;
	tmp_arr = (unsigned int*)malloc(sizeof(unsigned int*) * 16);
	/* tmp_arr = (unsigned int*)malloc(16); */
	while (i < size)
	{
		tmp_arr[i] = tab[(size - 1) - i];
		i++;
	}
	return (tmp_arr);
}

void	print_board(unsigned int	*clues, unsigned int **board)
{
	unsigned int	i;
	/* unsigned int	rev_clues[16]; */
	unsigned int	*rev_clues;

	printf("\n");
	rev_clues = get_rev_arr(clues, 16);
	i = 0;
	while (i < 8)
	{
		//top
		if (i == 0)
		{
			printf("    %d %d %d %d\n", clues[0],
					clues[1], clues[2], clues[3]);
		}
		// down
		else if (i == 7)
		{
			printf("    %d %d %d %d\n", clues[11],
					clues[10], clues[9], clues[8]);
		}
		else if ((i == 1 || i == 6))
			printf("   ---------\n");
		else
			printf("%d | %d %d %d %d | %d\n",
					rev_clues[i - 2],
					board[i - 2][0],
					board[i - 2][1],
					board[i - 2][2],
					board[i - 2][3],
					clues[i + 2]
					);

		
		i++;
	}
	
}
