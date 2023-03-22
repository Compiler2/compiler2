#define NUM_ITER 998633

#include <header.h>

int main_bench()
{
	char m[50]={'\n'},n[50]={'\n'};
	int i=0,j=0,h=0,k=0;
	my_scanf("%s%s",m,n);
	for(i=0;i<strlen(n);i++)
	{
		if(m[0]==n[i])
		{
			k=i;h=i;
			for(j=0;j<strlen(m);j++,k++)
			{
				if(m[j]!=n[k])
				{
					break;
				}
			}
			if(j==strlen(m))
			{
				my_printf("%d",h);
				break;
			}
		}
	}
    return 0;
}
