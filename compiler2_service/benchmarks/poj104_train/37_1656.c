#define NUM_ITER 23971

#include <header.h>

int main_bench()
{
	int n,i,b=0,c=0,l,j,k;
	char a[100001];
	my_scanf ("%d",&n);
	for(i=0;i<n;i++)
	{
		getchar();
		my_scanf("%s",a);
		l=strlen(a);
		for(j=0;j<l;j++)
		{
			for(k=0;k<l;k++)
			{
				if (a[j]==a[k])
					b=b+1;
			}
			if(b==1)
			{
				my_printf("%c\n",a[j]);
				b=0;
				break;
			}
			else 
			{
				c=c+1;
			}
			b=0;
		}
		if(c==l)
			my_printf("no\n");
		c=0;
	}
	return 0;
}
