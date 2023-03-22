#define NUM_ITER 32036

#include <header.h>

int main_bench()
{
	int n;
	int i,j;
	char a[500][40];
	int b[500],m;

	my_scanf("%d",&n);
    for(i=0;i<n;i++)
	{
		my_scanf("%s",a[i]);
		b[i]=strlen(a[i]);
	}
	a[i][0]='\0';
	b[i]=0;
    m=b[0];
	for(j=0;j<n-1;j++)
	{
		m=m+1+b[j+1];
		if(m<=80)
			my_printf("%s ",a[j]);
		else
		{
			my_printf("%s\n",a[j]);
			m=b[j+1];
		}
	}
	my_printf("%s\n",a[j]);
}
