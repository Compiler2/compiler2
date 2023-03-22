#define NUM_ITER 25965

#include <header.h>


int main_bench()
{
  int m,i,j,n,k;
  my_scanf("%d",&m);
  for(i=3;i<=m/2;i++)
  {   
	 n=0,k=0;
	  for(j=2;j<i;j++)
     {  if(i%j==0) break;
       n=j;}
     if(n==(i-1)) 
      { for(j=2;j<(m-i);j++)
       {if((m-i)%j==0) break;
         k=j;}
       }
    if(k==(m-i-1))
      my_printf("%d %d\n",i,m-i);
  }
 
  return 0;
  }