#define NUM_ITER 760535

#include <header.h>

int main_bench()
{
	int i,j,max=0;
	char a[1000],b[1000],c;
	my_scanf ("%s %s",a,b);
	for (i=0;i<1000;i++)
	{
		if (a[i]=='\0')
			break;
		for (j=i;j<1000;j++)
		{
			if (a[j]=='\0')
				break;
			else 
			{
				if (a[j]>a[max])
					max=j;
			}
		}
		c=a[i];
		a[i]=a[max];
		a[max]=c;
		max=i+1;
	}
		for (i=0;i<1000;i++)
	{
		if (b[i]=='\0')
			break;
		for (j=i;j<1000;j++)
		{
			if (b[j]=='\0')
				break;
			else 
			{
				if (b[j]>b[max])
					max=j;
			}
		}
		c=b[i];
		b[i]=b[max];
		b[max]=c;
		max=i+1;
	}
	if (strcmp(a,b)==0)
		my_printf ("YES\n");
	else
		my_printf("NO\n");
	return 0;
}