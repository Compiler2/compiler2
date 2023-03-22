#include <header.h>

int main_bench()
{
    int m=1,a,b,c,i,n,j;
    float x,sum;
    my_scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
                     my_scanf("%d",&n);
                     a=1;b=1;sum=0;j=1;
                     while(j<=n)
                     {
                                c=a+b;
                                a=b;
                                b=c;
                                x=(float)b/a;
                                sum=sum+x;
                                j=j+1;
                                }
                                my_printf("%.3f\n",sum);
                                }
                                                          return 0;
                                }
                                