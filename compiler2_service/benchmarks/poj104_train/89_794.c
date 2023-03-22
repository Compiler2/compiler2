#define NUM_ITER 558

#include <header.h>

main_bench()
{
  int n ,a[50000][2],b[50000],c[50000],k=0,t=0;
  for(int i=0;i<50000;i++)
  {
      b[i]=0;
      c[i]=0;
  }
  my_scanf("%d",&n);
  for(int i=0;;i++)
  {
      my_scanf("%d %d",&a[i][0],&a[i][1]);
      if(a[i][0]==a[i][1]) break;
      else k++;
  }
  for(int i=0;i<k;i++)
   {
       for(int j=0;j<n;j++)
       {
               if(a[i][1]==j) b[j]++;
               if(a[i][0]==j) c[j]++;
       }
   }
   for(int i=0;i<n;i++)
   {
           if(b[i]==n-1&&c[i]==0) my_printf("%d",i);
           else t++;
   }
   if(t==n) my_printf("NOT FOUND");
}
