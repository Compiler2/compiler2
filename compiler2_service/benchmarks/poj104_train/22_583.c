#define NUM_ITER 172462

#include <header.h>

int main_bench()
{
	int i=0,m=0,a[300],k=0,z=0;
	char c;
	while(1)
	{
		my_scanf("%d",&a[i]);
		my_scanf("%c",&c);
		m++;
		if(c=='\n') break;
		i++;
	}
	for(i=0;i<m;i++)
	{
		if(k<a[i])
		{
			z=k;
			k=a[i];
		}
		else if(z<a[i]&&a[i]!=k) z=a[i]; 
	}
	if(m==1) my_printf("No");
	else
	{
		if(z!=0) my_printf("%d",z);
		else my_printf("No");
	}
}