#define NUM_ITER 8496

#include <header.h>

int main_bench()
{
    int n,i,k,a,time;
    k=1;
    time=0;
    my_scanf("%d",&n);
    int*sz=(int*)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    {
                    my_scanf("%d",&sz[i]);
    }
    for(i=0;i<n-1;i++)
    {
                    for(k=i+1;k<n;k++)
                    {
                              if(sz[i]==sz[k])
                              {
                                              for(a=k;a<n-1;a++)
                                              {
                                              sz[a]=sz[a+1];
                                              }
                                              n--;
                                              k--;
                              }
                    }
    }
    for(i=0;i<n;i++)
    {
                         if(i==0)
                         my_printf("%d",sz[i]);
                         else if(i!=0)
                         my_printf(" %d",sz[i]);
    }
    free(sz);
return 0;
}