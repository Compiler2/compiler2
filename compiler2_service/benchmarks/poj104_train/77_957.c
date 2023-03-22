#define NUM_ITER 1302585

#include <header.h>

int main_bench()
{
    char s[400],c1;
    int top=0,i,j,k,m,n,a[100];
    gets(s);
    c1=s[0];
    for (i=0;i<strlen(s);i++)
    {
        if (s[i]==c1) 
        {
           top++;
           a[top]=i;
        }
        else 
        {
             my_printf("%d %d\n",a[top],i);
             top--;
        }
    }
    return 0;
}
