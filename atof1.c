#include <ctype.h>
#include <stdio.h>

#define MAXLINE 100


int getline1(char s[], int lim)
{
	int c,i;

	for(i = 0; i < lim -1 && ((c = getchar()) != EOF && c != '\n'); ++i)
		/*write all values from console into char array(remember array is modified in place)
		'i' gets populated at the first step,
		just in case you are wondering.
		*/
		s[i] = c;
	if (c == '\n')
		{
		/* if current char is new line character, 
		this means line has ended increment i one value
		*/
			s[i] = c;
			++i;
		}
	/* adding \0 in the end and modifying the array*/
	s[i] = '\0';
	return i;
	
	
}

double atof1(char s[])
{
	double val, power;
	int i, sign;

	for (i=0; isspace(s[i]); i++)
		;
	sign = (s[i]=='-') ? -1 : 1;
	if (s[i] == '+'||s[i] == '-')
		i++;
	for (val=0.0;isdigit(s[i]);i++)
		val = 10.0 * val + (s[i] - '0');
	if (s[i] == '.')
		i++;
	for (power=1.0;isdigit(s[i]);i++){
		val = 10.0 * val + (s[i] - '0');
		power = power * 10.0;
	}
	return sign * val/power;
}

int main()
{
	double sum, atof1(char[]);
	char line[MAXLINE];
	int getline1(char line [], int max);

	sum = 0;
	while (getline1(line, MAXLINE) > 0)
		printf("\t%f\n", sum += atof1(line));
	return 0;
	
}
