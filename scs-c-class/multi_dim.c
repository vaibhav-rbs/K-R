#include <stdio.h>

int a2[5][7];



int i, j;

int main()
{
	for (i= 0; i < 5; i = i + 1)
	{
		for (j=0; j < 7; j = j + 1)
		{
			a2[i][j] = 10 * i + j; 
		}
	}

	for (j = 0; j < 7 ; j = j + 1)
		printf("\t%d:", j);
	printf("\n");

	for (i=0; i < 5; i = i + 1)
	{
		
	}
}