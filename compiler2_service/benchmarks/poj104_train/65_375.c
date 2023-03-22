#define NUM_ITER 37829

#include <header.h>

main_bench()
{
   int n,A,B,Aw=0,Bw=0;
   my_scanf("%d",&n);
   while(n--)
   {
     my_scanf("%d%d",&A,&B);
     if(A==0)
      {
       if(B==1)
       Aw++;
       else if(B==2)
       Bw++;
       }
     else if(A==1)
       {
       if(B==2)
       Aw++;
       else if(B==0)
       Bw++;
       }
     else
      {
       if(B==0)
       Aw++;
       else if(B==1)
       Bw++;
      }
   }
  if(Aw>Bw)
    my_printf("A");
  else if(Aw<Bw)
    my_printf("B");
  else
    my_printf("Tie");
}
