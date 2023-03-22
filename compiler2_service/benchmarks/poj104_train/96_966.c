#include <header.h>

int main_bench()
{
	char a[100];
	int t,b=0,k=0,i;
	gets(a);
	t=strlen(a);
	for(i=0;i<t;i++)
	{
		b=b*10+a[i]-48;
		if(b>=13)
		{
			k=1;
			my_printf("%d",b/13);
			b=b%13;
		}
		else if(k) my_printf("0");
	}
	if(!k)my_printf("0");
	my_printf("\n%d",b);
}
