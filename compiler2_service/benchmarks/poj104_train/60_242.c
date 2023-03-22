#define NUM_ITER 71845

#include <header.h>

main_bench()
{
      int n,i,j,k=0,m;
      my_scanf("%d",&n);
      for(i=3;i<=n-2;i=i+2)
      {m=0;
      for(j=3;j<i;j=j+2)
      {
           if((i%j==0)||((i+2)%j==0))
           {m=1;break;} 
      }
      if(m==0)
      {my_printf("%d %d\n",i,i+2);k+=1;}
      }
      if(k==0)
      my_printf("empty");
}
