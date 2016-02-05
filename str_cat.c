#include <stdio.h>

/*strcat: concatenate to the end of s;*/
void str_cat(char s[], char t[])
{   
    int i, j;

    i = j = 0;

    while (s[i] !='\0')
        i++;
    while ((s[i++] = t[j++]) !='\0')
        ;
    printf("%s", s);
}

int main(){
    char fname [17] = {'V','A','I','B','H','A','V',' ','\0'};
    char lastname[8] ={'C','H','A','U','H','A','N','\0'} ;
    str_cat(fname, lastname);
}
