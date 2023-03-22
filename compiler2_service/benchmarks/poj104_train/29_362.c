#include <header.h>

main_bench()
{
   float a[1000],b[1000];
   int n,m,i,j,k;
   float sum;
   my_scanf("%d",&n);
   a[0]=2;
   a[1]=3;
   b[0]=1;
   b[1]=2;
   for(i=0;i<n;i++)
   {
      sum=0;
       
       my_scanf("%d",&m);
     
    
       for(j=0;j<m;j++)
       {
          if(j>=2)
          {
          a[j]=a[j-1]+a[j-2];
          b[j]=b[j-1]+b[j-2];
          }
          sum=sum+(float)(a[j])/(float)(b[j]);
       }
       my_printf("%.3f\n",sum);
   }
   getchar();
   getchar();
}
