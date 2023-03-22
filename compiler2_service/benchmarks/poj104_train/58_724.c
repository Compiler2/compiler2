#define NUM_ITER 26999

#include <header.h>

int main_bench()
{
	int n,i,l,j,p,m;
	char c[81];
	my_scanf("%d",&n);
	gets(c);
	


	for(i=0;i<n;i++)
	{
		gets(c);
		
		l=strlen(c);
		for(j=0;j<l;j++)
		{
			if((c[j]>47&&c[j]<58)||(c[j]>64&&c[j]<91)||(c[j]<123&&c[j]>96)||c[j]==95)
			{
				m=1;
			}
			else
			{
				m=0;
				break;
			}
		}
		if(c[0]>47&&c[0]<58)
			m=0;
		my_printf("%d\n",m);
	}
	return 0;
}
