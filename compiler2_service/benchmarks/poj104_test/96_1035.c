#include <header.h>

int main_bench()
{
	char a[100];
	my_scanf("%s",a);
	int b[100];
	int c[100];
	int i,j,k,m,n;
	n=strlen(a);
	for(i=0;i<=n;i++)
	{
		b[i]=a[i]-'0';
	}
	if(n<=2) 
	{
		if(n==1) my_printf("%c\n%d",'0',b[0]);
		if(n==2) {k=b[0]*10+b[1];my_printf("%d\n%d",k/13,k%13);}
	}
	else
	{
	c[0]=(b[0]*10+b[1])/13;
	b[1]=(b[0]*10+b[1])%13;
	if(c[0]!=0) my_printf("%d",c[0]);
	for(i=1;i<n-1;i++)
	{
		c[i]=(b[i]*10+b[i+1])/13;
		b[i+1]=(b[i]*10+b[i+1])%13;
		my_printf("%d",c[i]); 
	}
	my_printf("\n");
	my_printf("%d",b[n-1]);
	}
	
}