#include <stdio.h>
/* atoi: convert s to integer*/
/* ip 123;
 * 1st loop; n = 0; i=0 ;s[0]-`0`==> `1`-`0`==>1
 *           n = 10 * 0 + 1
 *           n <== 1
 * 2nd loop; n = 1; i = 1 ; s[1] - `0` ==> `2`-`0` ==> 2
 *           n = 10 * 1 + 2
 *           n <== 12
 * 3rd loop; n = 12; i = 2; s[2] - `0` ==> `3` - `0` ==> 3           
 *           n = 10 * 12 + 3
 *           n <== 123
 * return 123          
 * */
int atoi(char s[])
{
    int i,n;

    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; ++i)
        n = 10 * n + (s[i]-'0');
    return n;
}

int lower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return c + 'a'-'A';
    else
        return c;
}

int main()
{
    atoi("12");
    lower('V');
}
