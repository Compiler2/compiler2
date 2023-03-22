#include <header.h>

main_bench()
{
 int n,k,i,j,a=0;
 my_scanf("%d %d",&n,&k);
 int *p;
 p=(int *)malloc(n*sizeof(int));
 for(i=0;i<n;i++)
   my_scanf("%d",&p[i]);
 for(i=0;i<n-1;i++)
   for(j=i+1;j<n;j++)
     {
      if(p[i]+p[j]==k)
        a=1;
     }
 if(a==1)
   my_printf("yes");
 else
   my_printf("no");
 
} 