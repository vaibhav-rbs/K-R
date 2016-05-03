#include <stdio.h>

int unique_char1(char s[])
{
	int i ; int j;
	for (i=0;i<=sizeof(s);i++)
	{
		for(j=i+1;s[j]!='\0';j++)
		{
			if (s[i]==s[j])
			{	
				printf("False\n");
				return 1;

			}
		}
	}
	printf("True\n");
	return 0;
}

int main ()
{
	unique_char1("va");
}