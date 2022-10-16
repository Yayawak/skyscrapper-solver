#include <stdio.h>
void	swap(int *x, int *y)
{
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

void	permutation(int *arr, int l,int r)
{
	/*if(sizeof(arr) / sizeof(arr[0]) == 1)
	{
		return (arr);
	}
	int *perms = permutation(
	return (0);*/
	int	i = 0;
	//int	size = sizeof(&arr) / sizeof(&arr[0]);
	//int	size = sizeof(*arr) / sizeof(arr[0]);
	//int	size = (int)(sizeof(arr) / sizeof(arr[0]));
	int	size = sizeof(arr) / sizeof(arr[0]);
	if (l == r)
	{
		//printf("%d, %d, %d %d\n",arr[0],arr[1],arr[2], arr[3]);
		printf("%d, %d, %d\n", arr[0], arr[1], arr[2]);
	}
	else
	{
		i = l;
		while (i < r)
		{
			//swap((*arr[i+l]), (*arr[i+i]));
			swap(&arr[i] + l, &arr[i]);
			permutation(arr, l+1, r);
			swap(&arr[i] + l, &arr[i]);
			//swap((*arr[i+l]), (*arr[i+i]));
			i++;
		}
	}
}
int	main()
{
	int a[] = {1,2,3,4};
	permutation(a,0,3);
}
