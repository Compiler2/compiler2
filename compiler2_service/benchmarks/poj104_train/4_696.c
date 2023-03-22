#define NUM_ITER 559

#include <header.h>

main_bench()
{
   int a,b,i,j;
   int c[100][100];
   my_scanf("%d %d",&a,&b);
   for(i=0;i<a;i++)
     for(j=0;j<b;j++)
       my_scanf("%d",&c[i][j]);
   for(i=0;i<b;i++)
   {
      for(j=0;j<=i&&j<a;j++)
         my_printf("%d\n",c[j][i-j]);
   } 
   for(i=b;i<a+b-1;i++)
       {
       for(j=i+1-b;j<a&&j<=i;j++)
          my_printf("%d\n",c[j][i-j]); 
       }
}