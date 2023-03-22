#include <header.h>

int main_bench()
{
	int a,i,m=0,n=0;
	char c;
	for(i=1;i>0;)
	{
		my_scanf("%d",&a);
		my_scanf("%c",&c);
		if(a>m)
		{
			n=m;
			m=a;
		}
		else if(a>n&&a<m) n=a;
		if (c=='\n') break;
	}
	if(n!=0) my_printf("%d",n);
	else my_printf("No");

	return 0;
}