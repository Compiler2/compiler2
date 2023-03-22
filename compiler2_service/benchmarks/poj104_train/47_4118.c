#define NUM_ITER 7551

#include <header.h>

int main_bench()
{
  int sz[100],sz1[100],n,i,j,l,k,e;
  my_scanf("%d",&n);
    for(i=0;i<n;i++)
     {
      my_scanf("%d",&sz[i]); 
      }
       for(int j = 1 ; j <= n ; j++){
       for(int l = 0; l < n - j; l++){                          
            e = sz[l+1];
            sz[l+1] = sz[l];
            sz[l] = e;
   }
                   }
my_printf("%d",sz[0]);
for(k=1;k<n;k++)
{
 my_printf(" %d",sz[k]);
}
return 0;
}