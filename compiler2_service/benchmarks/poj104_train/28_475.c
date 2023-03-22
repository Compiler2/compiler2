#define NUM_ITER 1195822

#include <header.h>

int main_bench()
{
	char a[10000];
	int b[300],m=0,i;
	gets(a);
	int n=strlen(a);
	for(i=0;i<n;i++)
	{
		int k=0;
		while(a[i]!=' '&&a[i]!='\0')
		{
			k++;
			i++;
		}
		
		if(k!=0){m++;
		b[m]=k;}
	}
	for(i=1;i<m;i++)
		my_printf("%d,",b[i]);
	my_printf("%d\n",b[m]);
}
