#define NUM_ITER 1115614

#include <header.h>

int main_bench()
{
    int i,n;
    char s[101],s1[101];
    gets(s);
    for(i=0;i<strlen(s);i++)
    {
                            s1[i]=s[i]+s[i+1];
                            if(i==strlen(s)-1)
                            {
                                              s1[i]=s[0]+s[i];
                            }
    }
    for(i=0;i<strlen(s);i++)
    {
                            my_printf("%c",s1[i]);
    }
    return 0;
}