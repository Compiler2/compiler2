#define NUM_ITER 6131

#include <header.h>

int main_bench()
{
    int sz[300];
    int n,i,j,l;
    my_scanf("%d",&n);
    for(i=0;i<n;i++){
        my_scanf("%d",&sz[i]);
        }
   my_printf("%d",sz[0]);
   for(j=1;j<n;j++){
      int f=0;
      for(l=0;l<j;l++){
        if(sz[j]==sz[l])  f=1;
        }
        if(f==0) my_printf(",%d",sz[j]);
        }
        return 0;
        }