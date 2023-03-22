#define NUM_ITER 335452

#include <header.h>

int main_bench()
{int  n,k;
  my_scanf("%d",&n);
  k=n;
  while(k!=1)
  {     if(n%2==0) 
  {     k=n/2;
	  my_printf("%d/%d=%d\n",n,2,k);
	  n=k;
  }
   else  
   {     k=n*3+1;
	   my_printf("%d*%d+%d=%d\n",n,3,1,k);
	   n=k;
   }
  }
  my_printf("End");
  return 0;
}