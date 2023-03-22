#include <header.h>

int main_bench()
{
	int i,j,k,t;
	unsigned int a[300];
	char c;
	for(i=0;i<=300;i++)
	{
		my_scanf("%d",&a[i]);
		my_scanf("%c",&c);
		if(c!=',')break;
	}
	if(i==0){my_printf("No\n");goto a;}
	else
	{
	for(j=i;j>=1;j--)
		for(k=0;k<j;k++)
			if(a[k]<a[k+1])
			{
				t=a[k];
				a[k]=a[k+1];
				a[k+1]=t;
			}
	}
	if(a[0]==a[i])
	{my_printf("No\n");goto a;}
	else 
		for(j=0;j<=i;j++)
	{
		if(a[j+1]<a[j])
		{
			my_printf("%d\n",a[j+1]);
			break;
		}
	}
a:;
}
