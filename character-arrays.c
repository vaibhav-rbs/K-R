#include <stdio.h>
#define MAXLINE 1000

int get_line(char line[], int maxline);
void copy(char to[], char from[]);

int main()
{
	int len;               /* current line length */
	int max;			   /* max length seen so far */
	char line[MAXLINE];    /* current input line saved here */
	char longest[MAXLINE]; /* longest line seen saved here */

	max = 0;
	while((len = get_line(line, MAXLINE) ) > 0)
		if (len > max)
		{
			max = len;
			copy(longest, line);
		}

		if (max > 0)
			printf("%s", longest);
	return 0;
}

int get_line(char s[], int lim)
{
	int c,i;

	for(i = 0; i < lim -1 && ((c = getchar()) != EOF && c != '\n'); ++i)
		/*write all values from console into char array
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
	/* adding \0 in the end*/
	s[i] = '\0';
	return i;
	
	
}

void copy(char to[], char from[])
{
	int i;

	i = 0;
	while((to[i] = from[i]) != '\0')
	{
		++i;
	}

}
