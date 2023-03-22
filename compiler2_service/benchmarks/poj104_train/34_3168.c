#define NUM_ITER 762883

#include <header.h>

main_bench()
{
	unsigned int i;
	my_scanf("%d",&i);
	  do{
	  if(i%2==1&&i!=1)
	  i=3*i+1,my_printf("%d*3+1=%d\n",(i-1)/3,i);
	  else if(i%2==0)
	  i=i/2,my_printf("%d/2=%d\n",2*i,i);
	  else
	  ;
	  }while(i!=1);
	  my_printf("End");
}
