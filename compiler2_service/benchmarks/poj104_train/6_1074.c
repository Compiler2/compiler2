#define NUM_ITER 32

#include <header.h>

int main_bench()
{
int nn,ii;
my_scanf("%d",&nn);
for(ii=1;ii<=nn;ii++)
{
    int n,m,t,i,j,x,y,sum=0;
    my_scanf("%d %d",&y,&x);
    for(i=1;i<=y;i++)
    {
        for(j=1;j<=x;j++)
        {
            my_scanf("%d",&t);
            if(i==1||i==y||j==x||j==1)
            {sum+=t;}
        }
    }
    my_printf("%d\n",sum);
}
}
