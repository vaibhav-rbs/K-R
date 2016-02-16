#include <stdio.h>
#include <stdarg.h>

void bubblesort(int n, int v[])
{
	int i,j,temp;
	for (i=0 ; i < n ; i++)
	{
		for(j=0;j < n - 1; j++)
		{
			if (v[j] > v[j+1])
			{
				temp = v[j+1];
				v[j+1] = v[j];
				v[j] = temp; 
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
	bubblesort(len,array);
	printf("sorted array \n");
	for (int i =0 ; i < len ; i++)
	{
		printf("%d\n",array[i] );
	}
}