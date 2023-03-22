#define NUM_ITER 8103

#include <header.h>

main_bench()
{
      int n,k,m,j,i;
      my_scanf("%d",&n);
      int a[n];
      for(k=0;k<n;k++)
      my_scanf("%d",&a[k]);
      for(i=0;i<n;i++)
      {
             m=0;
             for(j=0;j<i;j++)
             {
                   if(a[j]==a[i])
                   {m+=1;break;}
             }
             if(m==0)
             {
                     if(i!=0)
                     my_printf(" ");
                     my_printf("%d",a[i]);
             }
             
      }
      
}
