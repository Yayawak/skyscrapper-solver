#include <stdlib.h>

unsigned int	*find_empty(unsigned int **board)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	N;
	unsigned int	*pos;
	/* unsigned int	pos[sizeof(unsigned int) * 2]; */
	/* unsigned int	pos[2]; */

	N = 4;
	i = 0;
	while (i < N)
	{
		j = 0;
		while (j < N)
		{
			if (board[i][j] == 0)
			{
				/* unsigned int	*pos = {i, j}; */
				/* unsigned int	pos[2]; */

				pos = (unsigned int*)malloc(sizeof(unsigned int) * 2);
				pos[0] = i;
				pos[1] = j;
				/* return ({i, j}); */
				return (pos);
				/* return [0, 1]; */
				/* return (&pos[0]); */
			}
			j++;
		}
		i++;
	}
	/* return (); */
	/* return (void); */
	/* return (pos)  = {x, y} = {0, 0} = {3, 2}
	 * */
	pos = (unsigned int*)malloc(sizeof(unsigned int) * 2);
	pos[0] = 99;
	pos[1] = 99;
	return (pos);
}
