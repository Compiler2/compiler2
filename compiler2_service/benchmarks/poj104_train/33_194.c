#define NUM_ITER 25672

#include <header.h>

int main_bench()
{
	int n,len,i,j;
	char a[256];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s",&a);
		len=strlen(a);
		for(j=0;j<len;j++)
		{
			switch(a[j])
			{
			case 65:{a[j]=84;break;}
			case 84:{a[j]=65;break;}
			case 71:{a[j]=67;break;}
			case 67:{a[j]=71;break;}
			}
		}
		a[len]=0;
		my_printf("%s\n",a);
	}
	return 0;
}