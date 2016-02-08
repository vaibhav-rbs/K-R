#include <stdio.h>

void selection_sort(int n, int v[])
{
	int temp,i,j,index_of_min;

	for(i = 0; i < n; i++ )
	{	
		index_of_min = i;
		for(j = i ; j < n ; j++)
		{
			if (v[index_of_min] > v[j])
			{
				temp = v[j];
				v[j] = v[index_of_min];
				v[index_of_min] = temp;
			}
		}
	}
}

int main()
{
	int len = 10;
	int array[10] = {101,43,56,78,98,23,45,75,56,22};
	for (int i =0 ; i < len ; i++)
	{
		printf("%d\n",array[i] );
	}
	selection_sort(len,array);
	printf("sorted array \n");
	for (int i =0 ; i < len ; i++)
	{
		printf("%d\n",array[i] );
	}
}