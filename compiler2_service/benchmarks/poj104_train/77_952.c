#define NUM_ITER 1387990

#include <header.h>

int main_bench()
{
	char a[1000];
	int n,x,m;
	gets(a);
	for(n=0,x=1;a[n]!='\0';n++)
	{
		if(a[n]==a[0])x=0;
		else if(a[n]!=' ')
		{
			for(m=n-1;m>=0;m--)
				if(a[m]==a[0])
				{
					my_printf("%d ",m);
					a[m]=' ';
					break;
				}
			my_printf("%d\n",n);
			a[n]=' ';
			n=0;
			x=1;
		}
		if(a[n+1]=='\0')break;
	}
	return 0;
}