#include <header.h>

int main_bench()
{
	char m[100];
	int n[100],t[100];
	int l,i,a,b;
	my_scanf("%s",m);
	l=strlen(m);
    for(i=0;i<=l-1;i++)
		n[i]=m[i]-'0';
	if(l>=3)
	{
	for(i=0;i<=l-2;i++)
	{
		t[i+1]=(n[i]*10+n[i+1])/13;
		n[i+1]=(n[i]*10+n[i+1])%13;
	}
	if(t[1]==0)
	{
	for(i=2;i<=l-1;i++)
	{
		my_printf("%d",t[i]);
	}
	}
	else
	{
    for(i=1;i<=l-1;i++)
	{
		my_printf("%d",t[i]);
	}
	}
	my_printf("\n");
	my_printf("%d",n[l-1]);
	}
	else if(l==2)
	{
		a=(n[0]*10+n[1])/13;
		b=(n[0]*10+n[1])%13;
		my_printf("%d\n",a);
	    my_printf("%d",b);
	}
	else
	{
		my_printf("0\n");
		 my_printf("%d",n[0]);
	}
	return 0;
}
