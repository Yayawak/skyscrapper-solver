#include <stdlib.h>

unsigned int	arr_len(void *arr)
{
	unsigned int	len;

	len = sizeof(*arr) / sizeof(arr[0]);
	return (len);
}

int	get_idx_of_first_appear(unsigned int *arr, int value_to_find)
{
	int	i;

	i = 0;
	while (i < arr_len(arr))
	{
		if (arr[i] == value_to_find)
			return (i);
		i++;
	}
	return (-1);
}

unsigned int	**permutations(unsigned int *d);

unsigned int	**get_possible_clues_of_incompleted_row(unsigned int *incompleted_row)
{
	unsigned int	**possible_rows;
	unsigned int	*d;
	/* unsigned int	d[5]; */
	/* unsigned int	d[5]; */
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	unsigned int	d_len;
	unsigned int	*row;
	unsigned int	**perms;
	unsigned int	*unique;

	i = 0;
	k = 0;
	/* how to find unique by not identical */
	// remove duplicated item // use set ??
	d = unique; 
	d_len = arr_len(d);
	perms = permutations(d);

	while (i < d_len)
	{
		unsigned int	*perm;

		j = 0;
		perm = perms[i];
		row = incompleted_row;
		while (j < arr_len(perms))
		{
			int	idx_row_have_zero;

			idx_row_have_zero = get_idx_of_first_appear(row, 0);

			row[idx_row_have_zero] = perm[j];
		}
		possible_rows[k] = (unsigned int*)malloc(sizeof(unsigned int*) * 4);
		possible_rows[k] = row;
		/* *possible_rows = row; */
		/* possible_rows++; */
		k++;
	}



	return (possible_rows);

}
