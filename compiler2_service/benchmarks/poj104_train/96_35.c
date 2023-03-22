#include <header.h>

int main_bench()
{
	char a[100];
	int n,i,b[100],c[100];
	my_scanf("%s",&a);
	n=strlen(a);

	for(i=0;i<n;i++)
	    b[i]=a[i]-'0';
if(n==1)
		my_printf("0\n%d\n",b[0]);
else if((n==2)&&(b[0]*10+b[1]<13))
		my_printf("0\n%d%d\n",b[0],b[1]);
else
{
	for(i=1;i<n;i++)
	{
		c[i]=(b[i-1]*10+b[i])/13;
	    b[i]=(b[i-1]*10+b[i])%13;
	}
if(c[1]==0)
{
	for(i=2;i<n;i++)
	my_printf("%d",c[i]);
	my_printf("\n");
	my_printf("%d\n",b[n-1]);
}
else
{
	for(i=1;i<n;i++)
	my_printf("%d",c[i]);
	my_printf("\n");
	my_printf("%d\n",b[n-1]);
	
}
}
return 0;
}