#include <stdio.h>

void insertion_sort(int n, int a[])
{
	int i, j, t;
	for (i=1; i<n; i++)
	{
		j = i;
		t = a[j];
		while(j>0 && a[j-1]>t)
		{
			a[j] = a[j-1];
			j--;
		}
		a[j] = t;
	}
}

int main()
{
	int len = 8;
	int array[8] = {5, 7, 0, 3, 4, 2, 6, 1};
	for (int i =0 ; i < len ; i++)
	{
		printf("%d\n",array[i] );
	}
	insertion_sort(len,array);
	printf("sorted array \n");
	for (int i =0 ; i < len ; i++)
	{
		printf("%d\n",array[i] );
	}
}