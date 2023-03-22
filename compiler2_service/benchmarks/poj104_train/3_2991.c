#define NUM_ITER 58451

#include <header.h>

int main_bench()
{ int n,k,i=0,j=0,flag=0;
  int str[1000];
  my_scanf("%d%d",&n,&k);
  for(i=0;i<n;i++)
   my_scanf("%d",&str[i]);
  i=0;
  for(i=0;i<n/2+1;i++)
  {  j=0;
	  for(j=0;j<n;j++)
	  { 
		  if((k-str[j])==str[i])
		  {flag=1;
	       break;
		  }
	  }
	  
	  if(flag==1)
	  {
		  my_printf("yes");
		  break;
	  }
  }
     if(flag==0)
	  my_printf("no");

	return 0;
}