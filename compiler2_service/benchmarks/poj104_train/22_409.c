#include <header.h>

int main_bench()
{
	int b[300],j,max,i,x;
	char c;
	for(i=0,c=' ';c!='\n';i++)
		my_scanf("%d%c",&b[i],&c);
	for(j=0,max=0;j<i;j++)
	{	
		if(b[j]>=max)
			max=b[j];
	}
	for(j=0,x=0;j<i;j++)
	{
		if(b[j]!=max&&b[j]>=x)
		x=b[j];
	}
	if(i==1||x==0)
		my_printf("No");
	else
		my_printf("%d",x);
	return 0;
}
