/* permute.c */ 

#include <stdio.h> 

/* function prototypes */ 
//void permute(int *, int, int);  
void swap(int*, int, int); 
void printArray( int*, int); 
int main( int , char** ); 


/* swap 2 values by index */ 
inline void swap(int* arr, int a, int b) 
{ 
		int tmp = arr[a]; 
		arr[a] = arr[b]; 
		arr[b] = tmp; 
} 


/* print len elements */ 
void print2DArray( int **a, int len) 
{ 
		//fprintf(stdout, "[ " ); 
		for (int i=0; i< len; i++) //fprintf(stdout, "%d " , a[i] ); 
		{
			for (int j = 0; j < len; j++)
			{
				printf("["); 
				printf("%d, ", a[i][j]);
				printf("]"); 
			}	
			printf("\n");
		}

		//fprintf(stdout, "]\n" ); 
} 
void printArray( int* a, int len) 
{ 
		size_t i = 0; 

		//fprintf(stdout, "[ " ); 
		printf("["); 
		for ( i=0; i< len; i++) //fprintf(stdout, "%d " , a[i] ); 
				printf("%d, ", a[i]);
		printf("]"); 

		//fprintf(stdout, "]\n" ); 
} 



# include <stdlib.h>

/* permute an array recursively */ 
void permute(int *arr, int start, int end) 
/* int	**permute(int *arr, int start, int end) */ 
//int	*permute(int *arr, int start, int end) 
{
		/* int	**result_arr; */
		int i; 

		/* result_arr = (int**)malloc(sizeof(int**) * 4 * 4); */
		if(start == end) /* this function is done */ 
		{ 
				printArray(arr, end); 

				// ml
				/* result_arr =  (int**)malloc(sizeof(int**) * 4); */
				/* *result_arr = arr; */
				/* result_arr++; */
				//return (arr); 
				return; 
		} 
		permute(arr, start + 1, end); /* start at next element */ 

		/* permute remaining elements recursively */ 
		for(i = start + 1; i < end; i++)  
		{ 
				if( arr[start] == arr[i] ) continue; /* skip */ 
				swap(arr, start, i); 
				permute(arr, start + 1, end); 
				swap(arr, start, i); /* restore element order */  
		} 
		/* return (result_arr); */
} 

/* do it */ 
int main( int argc, char** argv) 
{ 

		int arr[] = { 1, 2, 3, 4 }; 

		permute( arr, 0, 4);  /* array len = 4 */ 
		/* print2DArray(permute(arr, 0, 4), 4); */

		return 0; 
} 


