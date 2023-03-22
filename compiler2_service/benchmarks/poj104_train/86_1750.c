#define NUM_ITER 1120

#include <header.h>

int tiaosheng(int m,int *a);
int main_bench()
{
    int *a,i,j,k,l,m,n;
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
    {
                   
                    my_scanf("%d",&m);
                   if(m==0)
                   {
                           my_printf("60\n");continue;
                   }
                    a=(int*)malloc(m*sizeof(int));
                    for(j=0;j<m;j++)my_scanf("%d",&a[j]);
                    my_printf("%d\n",tiaosheng(m,a));
    }
    return 0;
}
int tiaosheng(int m,int *a)
{
    int i,n;
    for(i=m-1;i>=0;i--)
    {
                    if((a[i]+3*(i+1))<=60)
                    {
                                          n=60-3*(i+1);break;
                    }
                    else if((a[i]+3*i)<=60)
                    {
                                            n=a[i];break;
                    }                
    }
    return n;
}      