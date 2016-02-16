#include <stdio.h>
#include <string.h>
void reverse(char s[]);

void itoa_mod(int n, char s[])
{
	int i ,sign;
if((sign = n) < 0 )
{
	n = -n;
}
i = 0;
do {
	s[i++] = 10 % n + '0';
/*
math behind this step,
10%n+'0'
n = 1234
10%n = 4 + '0' == > 4 + 48;
s[0] = 52 
putting integer value in s, 
which is a char array will lead to auto conversion.
so 52 will be converted to '4'
*/
} while((n /= 10) >0);
/*
here is how delete works.
n = 1234
n = n/10 ==> 123
*/
if (sign<0)
{
	s[i++] = '-';
}
s[i] = '\0';
reverse(s);

}

void reverse(char s[])
{
	int c, i,j;
	for (i = 0, j = strlen(s)-1; i < j; i++, j--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}

int example()
{
	char s [] = "";
	s [0] = 52;
	for(int i = 0; i < strlen(s); i++){
	/*printf("%c\n", s[i]);*/
	}
}

int main()
{
	char x [] = "-12345";
	int y = -12345;
	itoa_mod(y ,x);
	printf("%s", x);
}