#include <ctype.h>

int atoi(char s[])
{
	int i, n, sign;

	for(i=0; isspace(s[i]); i++)
		;
	sign = (s[i]=='-'? -1 : 1);
}
