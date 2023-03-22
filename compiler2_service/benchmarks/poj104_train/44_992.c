#define NUM_ITER 444047

#include <header.h>


main_bench()
{
  int a,c,i,b[6];
  for(i=0;i<6;i++)
  {
	 my_scanf("%d",&a);
	 c=0;
     while(a)
	 {
       c=c*10+a%10;
	   a=a/10;
	 }
     b[i]=c;
  }
  
  for(i=0;i<6;i++)
	  my_printf("%d\n",b[i]);
}