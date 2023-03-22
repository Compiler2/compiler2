#include <header.h>


int main_bench()
{
	int a,b,c,d,e,f;
	
	int s;
	my_scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	while(1)
	{
		if(a!=0)
		{
	        s=(d+12-a)*3600+e*60+f-b*60-c;
	        my_printf("%d\n",s);
		    my_scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
		}
		else
		{
			break;
		}
	}


	return 0;
}

