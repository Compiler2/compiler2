#define NUM_ITER 522811

#include <header.h>

main_bench()
{
	int days[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	int m=0,w;
	my_scanf ("%d",&w);
	if((w+12)%7==5)
	my_printf ("1\n");
	for (int i=2;i<=12;i++){
		
		 for (int j=1;j<=i-1;j++)
		 {
		 m+=days[j];}
		 m =w+m+12;
		 if(m%7==5)
		 my_printf("%d\n",i);
		m=0;
		}
	
} 