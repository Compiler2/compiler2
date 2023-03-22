#define NUM_ITER 2568

#include <header.h>

void find(int m,int j,int *p)
{   
    for(;j<=m;j++)
    {
                  if(m==j)
                  {
                          (*p)++;
                          break;
                  }
                  if(m%j==0) find(m/j,j,p);
    }
}
int main_bench()
{
    int n,m,i,j;
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
    {
                    int count=0;
                    int *p;
                    p=&count;
                    my_scanf("%d",&m);
                    find(m,2,p);
                    my_printf("%d\n",count);
    }

    return 0; 
}
