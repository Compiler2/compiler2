#define NUM_ITER 59001

#include <header.h>

main_bench()
{
   int n,i,j,*a,c=0,t;
   my_scanf("%d",&n);
   a=(int*)calloc(n+1,sizeof(int));
   for(i=1;i<=n;i++)
    *(a+i)=0;
   for(i=3;i<=n;i+=2)
   {  t=1;
      for(j=2;j*j<=i;j++)
       if(i%j==0){t=0;break;}
      if(t==1)*(a+i)=1;
   }
   for(i=3;i<n-1;i+=2)
   if(*(a+i)==1&&*(a+i+2)==1)c++;
   if(c==0)my_printf("empty");
   if(c!=0)
   for(i=3;i<n-1;i+=2)
   if(*(a+i)==1&&*(a+i+2)==1)
   {  my_printf("%d %d",i,i+2);
      c--;
      if(c>0)my_printf("\n");
   }

}