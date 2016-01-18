#include <stdio.h>

/*squeeze: delete all c from s */
/* s[] <== "VAIBHAV", A */
/* keep looping thru, till you encounter '\0'; EO Line
 * c <== A
 * the moment you see, c[A] do nothing; increase i by one ++i
 * otherwise, copy current value @s[i] in s[j] and the increment
 * j by one
 * */
void sqeeze(char s[], int c)
{   
    int i, j;

    for(i = j = 0; s[i] != '\0';i++)
    {   
       if (s[i] != c)
           s[j++] = s[i];
       s[j] = '\0';
    }
    printf("%s",s);
}

int main()
{
    sqeeze("VAIBHAV",'A');
}
