#define NUM_ITER 43153

#include <header.h>

int yu7wuguan(int i);
int main_bench(){
    int sz[100],i,n,k;
    int max,e;
    my_scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       my_scanf("%d",&sz[i]);
       }
    for(k=1;k<=2;k++)
    {
                     max=0;
        for(i=0;i<=n-k;i++)
        {
          if(sz[i]>sz[max])
          {
            max=i;
            }
            }
          if(max!=n-k)
          {
             e=sz[max];
             sz[max]=sz[n-k];
             sz[n-k]=e;
             }
           my_printf("%d\n",sz[n-k]); 
             }
                 
                return 0;
        }
 
