#define NUM_ITER 1959443

#include <header.h>

int main_bench()
{
	int w,i,flag=0,j=0,a=0;
	int b[12]={0,31,28,31,30,31,30,31,31,30,31,30};
	int c[12];
	my_scanf("%d",&w);
	if((w>7)||(w<1))
		my_printf("Error!");
	else
	{ for(i=0;i<12;i++)
	{a=a+b[i];
	   if((w+12+a)%7==5)
	     {flag++;
	      c[j]=i;
		  j++;}}
	  for(i=0;i<j;i++)
		  my_printf("\n%d",c[i]+1);
	}
	return 0;
}