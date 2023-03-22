#include <header.h>

int main_bench()
{
	char s[100], w[100];
	int i, m=0, n=0;
	my_scanf("%s%s",s, w);
	for(;;)
	{
		for(i=n+1;;i++)
		{
			if(w[i]=='\0')
			{
				my_printf("No");
				return 0;
			}
			if(s[0]==w[i])
			{
				n=i;
				break;
			}
		}
		for(i++;;i++)
		{
			if(s[i-n]=='\0')
			{
				m=1;
				break;
			}
			if(s[i-n]!=w[i])
			{
				m=2;
				break;
			}
		}
		if(m==1)
		{
			my_printf("%d",n);
			break;
		}
		else if(w[i]=='\0')
		{
			my_printf("No");
			break;
		}
		else continue;
	}
	return 0;
}
