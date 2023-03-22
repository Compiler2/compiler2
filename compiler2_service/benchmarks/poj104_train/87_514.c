#define NUM_ITER 12813

#include <header.h>

int main_bench()
{
	int a,b,c,d,e,f,h,min,s,t,i;
	for (i=1;i<=100;i++)
	{
	    my_scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
		if (a+b+c+d+e+f==0)
		{
			break;
		}
		else
		{
	        h=((d+12)-(a+1))*3600;
	        min=((60-b-1)+e)*60;
	        s=(60-c)+f;
	        t=h+min+s;
			my_printf("%d\n",t);
		}
	}
}
