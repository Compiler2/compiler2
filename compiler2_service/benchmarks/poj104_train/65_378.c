#define NUM_ITER 33565

#include <header.h>


main_bench()
{
      int n,a[100],b[100],A=0,B=0;
      my_scanf("%d",&n);
      for(int i=0;i<n;i++)
      {
              my_scanf("%d%d",&a[i],&b[i]);
              if(a[i]==b[i])
              {
              A=A+1;
              B=B+1;
              }
              else if((a[i]==0)&&(b[i]==1))
              A=A+1;
              else if((a[i]==1)&&(b[i]==2))
              A=A+1;
              else if((b[i]==0)&&(a[i]==1))
              B=B+1;
              else if((b[i]==1)&&(a[i]==2))
              B=B+1;
              else if((a[i]==2)&&(b[i]==0))
              A=A+1; 
              else if((b[i]==2)&&(a[i]==0))
              B=B+1;
      }
      if(A>B)
      my_printf("A");
      else if(A<B)
      my_printf("B");
      else
      my_printf("Tie");
      
      }
