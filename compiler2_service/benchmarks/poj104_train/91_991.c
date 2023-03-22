#define NUM_ITER 1252058

#include <header.h>

main_bench()
{
    int n,i;
    char a[100],*p,b[100];
    p=a;
    gets(a);
    n=strlen(a);
    for(i=0;i<n-1;i++,p++)
    {
        b[i]=*p+*(p+1);
    }
    b[n-1]=a[0]+a[n-1];
    p=b;
    for(i=0;i<n;i++,p++) my_printf("%c",*p);
}