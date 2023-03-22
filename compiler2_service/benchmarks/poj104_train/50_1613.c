#include <header.h>

main_bench()
{
	int w,i,j,k,c=0;
	my_scanf("%d",&w);
	c=7+w;
	if(c%7==0)
		my_printf("1\n");
	for(i=1;i<12;i++)
	{
		if(i==1||i==3||i==5||i==7||i==8||i==10)
			c=c+31;
		if(i==4||i==6||i==9||i==11)
			c=c+30;
		if(i==28)
			c=c+28;
		if(c%7==0)
			my_printf("%d\n",i+1);
	}
	return 0;
}

