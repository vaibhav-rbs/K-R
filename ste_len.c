#include <stdio.h>

int str_len(char s[])
{
	int i;
	i = 0;
	while (s[i] != '\0')
	{
		++i;
	}
	return i;	
}

int main()
{
	printf("%d \n", str_len("vaibhav"));

}