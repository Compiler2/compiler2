#define NUM_ITER 1272654

#include <header.h>

main_bench()
{ int a,b,c;
  my_scanf("%d",&a);
  b=a/10000;
  if(b)
	  c=5;
  else{ b=a/1000;
      if(b)
		  c=4;
	  else{ b=a/100;
		  if(b)
			  c=3;
		  else{ b=a/10;
		  if(b)
			  c=2;
		  else c=1;}}}
  switch(c)
  {
  case 5:my_printf("%d%d%d%d%d\n",a%10,a%100/10,a%1000/100,a%10000/1000,a/10000);break;
  case 4:my_printf("%d%d%d%d\n",a%10,a%100/10,a%1000/100,a/1000);break;
  case 3:my_printf("%d%d%d\n",a%10,a%100/10,a/100);break;
  case 2:my_printf("%d%d\n",a%10,a/10);break;
  case 1:my_printf("%d\n",a);}
  return 0;}