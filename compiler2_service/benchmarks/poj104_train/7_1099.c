#define NUM_ITER 884834

#include <header.h>


int main_bench()
{
	char s[256],b[256],c[256];
	int i,j,k,n,m;
	my_scanf("%s",&s);
	my_scanf("%s",&b);
	my_scanf("%s",&c);
	n=strlen(s)-strlen(b);
	for(i=0;i<=n;i++)
	{
		m=0;
		for(j=0,k=i;j<strlen(b);j++,k++)
		{
			if(s[k]==b[j])
			{
				m++;
			}
		}
		if(m==strlen(b))
		{
			for(j=i,k=0;j<strlen(b)+i;j++,k++)
			{
				s[j]=c[k];
			}
			break;
		}
	}
	puts(s);


	return 0;
}

