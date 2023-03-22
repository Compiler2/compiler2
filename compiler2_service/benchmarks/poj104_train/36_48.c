#define NUM_ITER 960923

#include <header.h>

int main_bench()
{
	char a[100],b[100];
	int i,j,c,t;
	my_scanf("%s %s",a,b);
	c=strlen(a);
	for(i=0;i<c-1;i++)
	{
		for(j=i+1;j<c;j++)
		{
			if(a[j]>a[i])
			{
				t=a[j];
				a[j]=a[i];
				a[i]=t;
			}
		}
	}
	for(i=0;i<c-1;i++)
	{
		for(j=i+1;j<c;j++)
		{
			if(b[j]>b[i])
			{
				t=b[j];
				b[j]=b[i];
				b[i]=t;
			}
		}
	}
	if(strcmp(a,b)==0)
		my_printf("YES");
	else
		my_printf("NO");
}