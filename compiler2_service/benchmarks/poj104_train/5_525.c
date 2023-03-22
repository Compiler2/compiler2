#include <header.h>

int main_bench()
{
	double p;
	int e=0,t=0,f=0,q=0;
	char a[501],b[501];
	my_scanf("%lf\n",&p);
	gets(a);
	gets(b);
	if(strlen(a)!=strlen(b))q=1;
	else
	{
		for(int i=0;1;i++)
		{
			if(a[i]=='\0')break;
			if(a[i]!='A' && a[i]!='G' && a[i]!='C' && a[i]!='T')
			{
				q=1;
				break;
			}
			if(b[i]!='A' && b[i]!='G' && b[i]!='C' && b[i]!='T')
			{
				q=1;
				break;
			}
			if(a[i]==b[i])e++;
			t++;
		}
	}
	if(q==1)my_printf("error");
	else
	{
		if(p<1.0*e/t)my_printf("yes");
		if(p>1.0*e/t)my_printf("no");
	}
	return 0;
}
