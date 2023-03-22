#define NUM_ITER 34508

#include <header.h>

main_bench()
{
      int a,b,c,n,m,A,B;
      int x[210][2];
      my_scanf("%d",&n);
      for(a=0;a<=n-1;a++)
      my_scanf("%d %d",&x[a][0],&x[a][1]);
      A=0;
      B=0;
      for(a=0;a<=n-1;a++)
      {
                         if((x[a][0]==(x[a][1]+1))||(x[a][0]==(x[a][1]-2)))
                         B++;
                         else if((x[a][0]==(x[a][1]-1))||(x[a][0]==(x[a][1]+2)))
                         A++;
                         else;
      }
      if(A>B)
      my_printf("A");
      else if(A<B)
      my_printf("B");
      else
      my_printf("Tie");
}
