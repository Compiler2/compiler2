#include <header.h>

int main_bench()
{
    int b,i,m,n,x,y=0;
    char a[500];
    for(i=0;i<500;i++)
  {  my_scanf("%c",&a[i]);
  if(a[i]=='\n')
  break;}
                    for(n=2;n<=i;n++)
                    {
                                     for(m=0;m<=i-n;m++)
  {b=m;
                                    for(x=0;x<n/2;x++)
                                  {  if(a[m+x]==a[m+n-1-x])
                                    {y=0;}
                                    else
                                    {y=1;
                                    break;}}
                                    if(y==0)
                                    {for(b=m;b<m+n;b++)
                                    my_printf("%c",a[b]);}
my_printf("\n");
                                    x=0;}m=0;}
                                    return 0;}