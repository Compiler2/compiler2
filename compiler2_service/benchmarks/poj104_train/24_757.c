#define NUM_ITER 909666

#include <header.h>

int main_bench()
{
    int i,j,max,min;
    char s[100],a[100],b[100],t[100];
    gets(s);
    s[strlen(s)]=' ';
    j=0;
    max=0;
    min=100;
    for(i=0;i<strlen(s);i++)
        if (s[i]!=' ')
        {
            t[j]=s[i];
            j++;
        }
        else
        {
            if (j>max)
            {
                max=j;
                strncpy(a,t,j);
            }
            if (j<min)
            {
                min=j;
                strncpy(b,t,j);
            }
            j=0;
        }
    for(i=0;i<max;i++)
        my_printf("%c",a[i]);
    my_printf("\n");
    for(i=0;i<min;i++)
        my_printf("%c",b[i]);
    return 0;
}