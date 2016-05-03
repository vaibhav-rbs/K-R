#include <stdio.h>
#define MAXLINE 1000      /* maximum input line length */

int getline1(char line[], int max);
int strindex1(char source[], char searchfor[]);


char pattern[] = "ould";

int main ()
{
  char line[MAXLINE];
  int found = 0;

  while (getline1(line, MAXLINE) > 0)
    if (strindex1(line, pattern) >= 0)
    {
      printf("%s", line );
      found ++;
    }
    return found;
}

int getline1(char s[], int lim)
{
    int c, i;

    i = 0;
    while(lim > 0 && (c=getchar()) != EOF && c != '\n')
    {
      s[i++] = c;
      /* loop, while lim is > 0 and new
      character is on "EOF" and not "next line"
      */
    lim = lim-1;
    }
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

    return i;
}

int strindex1(char s[], char t[])
{
  int i, j, k;
  for (i=0; s[i] != '\0'; i++)
  {
    for(j=i , k=0; t[k]!='\0' && t[k]==s[j]; j++, k++)
      ;
    if (k>0 && t[k]=='\0')
      return i;

  }
  return -1;
}
