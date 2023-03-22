#include <header.h>

int main_bench()
{
	int a,b,c,d,e,f,i;
	for(i=1;i<10001;i++)
	{
		my_scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
		if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0)
			break;
		my_printf("%d\n",(d+12-a)*3600+(e-b)*60+f-c);
	}
	return 0;
}