#include <stdio.h>
#include <string.h>

int example()
{
	char s [] = "";
	s [0] = 52;
	for(int i = 0; i < strlen(s); i++){
	printf("%c\n", s[i]);
	}
}