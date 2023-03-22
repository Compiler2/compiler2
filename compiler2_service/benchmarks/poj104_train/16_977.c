#include <header.h>

int main_bench()
{
	int t,a,b,c,d,e;
	my_scanf("%d",&t);
	a=t/10000;
	b=(t-a*10000)/1000;
	c=(t-a*10000-b*1000)/100;
	d=(t-a*10000-b*1000-c*100)/10;
	e=t-a*10000-b*1000-c*100-d*10;
	if(a==0&&b==0&&c==0&&d==0) my_printf("%d",e);
	else {
		if(a==0&&b==0&&c==0&&d!=0) my_printf("%d%d",e,d);
		else{
			if(a==0&&b==0&&c!=0) my_printf("%d%d%d",e,d,c);
	           else{
				   if(a==0&&b!=0) my_printf("%d%d%d%d",e,d,c,b);
                    	else
						{
		                   if(a!=0) my_printf("%d%d%d%d%d",e,d,c,b,a);
						}
			   }
		}
		}
	return 0;
}