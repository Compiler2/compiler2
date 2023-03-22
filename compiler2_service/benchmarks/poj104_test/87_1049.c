#include <header.h>

int main_bench()
{
	while(1){
		int a,b,c,d,e,f;
	    my_scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
		if(a==0)
			return 0;
		else
			my_printf("%d\n",3600*(12+d-a)+(e-b)*60+f-c);
	}

	return 0;
}