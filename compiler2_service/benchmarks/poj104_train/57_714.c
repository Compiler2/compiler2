#define NUM_ITER 26037

#include <header.h>

main_bench()
{   int i,j,k,m,n;
    char a[50];
    my_scanf("%d",&n);
    for(i=1;i<=n;i++)
    {my_scanf("%s",a);
    m=strlen(a);
    if(a[m-1]=='g'&&a[m-2]=='n'&&a[m-3]=='i')
    {for(j=0;j<m-3;j++)
    {my_printf("%c",a[j]);
    if(j==m-4)
    my_printf("\n");}}
    else
    {for(j=0;j<m-2;j++)
    {my_printf("%c",a[j]);
    if(j==m-3)
    my_printf("\n");}}}
      }