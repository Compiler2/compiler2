#define NUM_ITER 1883723

#include <header.h>


int main_bench()

{
	int n,a,b,c,t;
	my_scanf("%d",&n);
	a=n%3;
	b=n%5;
	c=n%7;
	if(a==0&&b==0&&c==0)
		t=1;
	if(a!=0&&b==0&&c==0)
		t=2;
	if(a==0&&b!=0&&c==0)
		t=3;
	if(a==0&&b==0&&c!=0)
		t=4;
	if(a!=0&&b!=0&&c==0)
		t=5;
	if(a!=0&&b==0&&c!=0)
		t=6;
	if(a==0&&b!=0&&c!=0)
		t=7;
	if(a!=0&&b!=0&&c!=0)
		t=8;
	switch(t)
	{
	case 1:
		my_printf("3 5 7\n");
		break;
	case 2:
		my_printf("5 7\n");
		break;
	case 3:
		my_printf("3 7\n");
		break;
	case 4:
		my_printf("3 5\n");
		break;
	case 5:
		my_printf("7\n");
	    break;
	case 6:
		my_printf("5\n");
		break;
	case 7:
		my_printf("3\n");
		break;
	case 8:
		my_printf("n\n");
	}
	return 0;

	
}