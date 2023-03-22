#include <header.h>

int main_bench() 
{
    int m,a,b,i;
    my_scanf("%d",&m);
	for(a=3;a<=m/2;a+=2)
	{
		for(i=3;i<=a;i+=2)
			if(a%i==0)break;
		if(i<a)continue;
		else
		{
			b=m-a;
			for(i=3;i<=b;i+=2)
				if(b%i==0)break;
			if(i==b)
				my_printf("%d %d\n",a,b);
		}
	}
	return 0;
}