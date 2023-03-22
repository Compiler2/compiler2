#define NUM_ITER 1245861

#include <header.h>

int main_bench()
{
    int n,i;
    char c[100]={'\0'};
    gets(c);
    n=(int )strlen(c);
    for (i=0; i<n; i++)
    {
        if (i<n-1) my_printf("%c",c[i]+c[i+1]);
        else my_printf("%c",c[i]+c[0]);
    }
}
