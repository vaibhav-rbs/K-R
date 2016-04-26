#include <stdio.h>
#define MAXLINE 1000      /* maximum input line length */

int getline(char line[], int max);
int strindex(char source[], char searchfor[];


char pattern[] = "ould"

main ()
{
  char line[MAXLINE];
  int found = 0;

  while (getline(line, MAXLINE) > 0)
    if (strindex(line, pattern) >= 0)
    {
      printf("%s", line );
      found ++;
    }
    return found;
}

int getline(char s[], int lim)
{
    int c, i;

    i = 0;
    while(lim > 0 && (c=getchar()) != EOF && c != '\n')
    {
      s[i++] = c;
      /* loop, while lim is > 0 and new
      character is on "EOF" and not "next line"
      */
      if (c == '\n')
      {
        /*
        now if the character is "next line" you add that next line char
        */
        s[i++] = c;
      }
      /*
      after you have seen end of the characters add EOF symbol
      */
      s[i] = '\0';

    }
}

int strindex()
{

}
