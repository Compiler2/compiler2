#define NUM_ITER 46828

#include <header.h>

main_bench()
{
 int i,d,k,*p,j;
 my_scanf("%d",&k);
 p=(int *)malloc(k*sizeof(int));
 for(i=0;i<k;i++)
   my_scanf("%d",&p[i]);
 my_scanf("%d",&d);
 for(i=0;i<k;i++)
   {
    if(p[i]==d)
     {
      for(j=i;j<k-1;j++)
         p[j]=p[j+1];
      k--;
      i--;
     }
   }
 int y=0;
 for(i=0;i<k;i++)
  {
   if(y!=0)
     my_printf(" ");
   my_printf("%d",p[i]);
   y=1;
  } 
 free(p);
} 