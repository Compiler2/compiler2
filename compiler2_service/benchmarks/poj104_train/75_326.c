#include <header.h>


int main_bench()
{
	int i,j,a[1000]={0},b[1000]={0},n,cal=0,max=0;
	char ch;
	for (i=0;;i++)
	{
		my_scanf ("%d",&a[i]);
		my_scanf ("%c",&ch);
		if (ch==',')
			continue;
		else
		{
			n=i;
			break;
		}
	}
	for (i=0;;i++)
	{
		my_scanf ("%d",&b[i]);
		my_scanf ("%c",&ch);
		if (ch==',')
			continue;
		else
			break;
	}
	for (i=0;i<1000;i++)
	{
		for (j=0;j<=n;j++)
		{
			if (i>=a[j] && i<b[j])
				cal++;
		}
		if (cal>max)
			max=cal;
		cal=0;
	}
	my_printf ("%d %d",n+1,max);
}
