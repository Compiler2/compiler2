#include <header.h>


int main_bench()
{
	int n,a=0,x,y,i;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d%d",&x,&y);
		switch(x-y)
		{
			case -1:
			case 2:  a+=1;break;
			case 1:
			case -2: a-=1;break;
		}
	}	
	if(a>0) my_printf("A");
	else if(a<0) my_printf("B");
	else my_printf("Tie");
	return 0;
}