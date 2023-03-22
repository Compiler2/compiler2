#include <header.h>

int a[301];
char b[301];
int main_bench()
{
	int i, n, j, temp;
	for(i=0;i<300;i++)
		a[i]=0;
	for(i=0;i<300;i++)
		b[i]='\0';
	my_scanf("%d", &a[0]);
	for(i=0;i<300;i++)
	{	
		my_scanf("%c", &b[i]);
		if(b[i]!='\n')
		{
		my_scanf("%d", &a[i+1]);
		}
		else
		{
			if(b[i]=='\n')
			break;
		}
	}
	n=strlen(b);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]==a[i])
				a[j]=-1;
		}
	}
	if(n!=1)
	{
		for(j=0;j<n;j++)
		{
			for(i=1;i<(n-j);i++)
			{
				if(a[i-1]<a[i])
				{
			    	temp=a[i-1];
			    	a[i-1]=a[i];
			    	a[i]=temp;
				}
			}
		}		
		if(a[1]!=-1)
	    	my_printf("%d\n", a[1]);
		else
			my_printf("No\n");
	}
	else
		my_printf("No\n");

	return 0;
}