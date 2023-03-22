#define NUM_ITER 267870

#include <header.h>

main_bench()
{
 int i,a,b,n,flag=0,c[10100],d[10100];
 my_scanf("%d",&n);
 while (my_scanf("%d%d",&a,&b)==2)
 {
   if (a==0&&b==0)
     break;
   c[b]++;
   d[a]++;     
 }
 for (i=0;i<=n-1;i++)
 if (c[i]==n-1&&d[i]==0)
  {
    my_printf("%d",i);
    flag=1;                        
  }
 if (flag==0) 
   my_printf("NOT FOUND\n");
   getchar();
   getchar();
   getchar();
   getchar();
   return 0;    
}