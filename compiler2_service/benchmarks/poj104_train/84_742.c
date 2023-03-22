#define NUM_ITER 62145

#include <header.h>

int main_bench()
{
	int n;
	int s,t,r;
	my_scanf("%d",&n);
	for(int i=0;i<n;i++)
	{	
		int NUMBER;
		my_scanf("%d",&NUMBER);
		switch(i)
		{
		case 0:
			s=NUMBER;
			break;
		case 1:
			t=NUMBER;
			if(s<t)
			{
				r=s;
				s=t;
				t=r;
			}
			break;
		default:
			if(NUMBER>s)
			{
				r=s;
				s=t;
				t=r;
				r=NUMBER;
				NUMBER=s;
				s=r;
			}
			else if(NUMBER>t)
			{
				r=NUMBER;
				NUMBER=t;
				t=r;
			}
			break;
		}
	}
	my_printf("%d\n%d\n",s,t);
	return 0;
}