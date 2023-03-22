#include <header.h>

int main_bench()
{
	int a[300],max,sec,i,j;
	char b[300];
	for (i=0;;i++)
	{
		my_scanf("%d",&a[i]);
		my_scanf("%c",&b[i]);
		if (b[i]=='\n')
			break;
	}
	max=a[0];
	sec=-1;
	for(j=1;j<=i;j++)
	{
		if(a[j]>max)
		{
			sec=max;
			max=a[j];
		    
		}
		if(a[j]<max&&a[j]>sec)
		{
			sec=a[j];
		}
	}
	if(sec==-1)
		my_printf("No");
	else
		my_printf("%d",sec);
	return 0;
}
		
