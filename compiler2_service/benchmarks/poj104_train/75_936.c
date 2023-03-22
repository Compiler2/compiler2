#include <header.h>

main_bench()
{
	int i,t,n,num,max=0;
	int in[1000],out[1000];
	char a;
	for(i=0;;i++)
	{
		my_scanf("%d",&in[i]);
		my_scanf("%c",&a);
		if(a=='\n') break;
	}
	for(i=0;;i++)
	{
		my_scanf("%d",&out[i]);
		my_scanf("%c",&a);
		if(a=='\n') break;
	}
	n=i+1;
	my_printf("%d ",n);
	for(t=0;t<1000;t++)
	{
		num=0;
		for(i=0;i<n;i++)
			if(t>=in[i]&&t<out[i]) num++;
		if(num>max) max=num;
	}
	my_printf("%d\n",max);
}