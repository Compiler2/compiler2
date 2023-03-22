#define NUM_ITER 1400028

#include <header.h>

int main_bench()
{ 
    int a[300],i,j,g,t;
	char b[300];
	for(i=1;;i++)
	{
		my_scanf("%d",&a[i]);
		my_scanf("%c",&b[i]);
			if(b[i]!=44)break;
	}
	for(j=1;j<=i;j++)
	{
		for(g=1;g<=i-j;g++)
			if(a[g]>a[g+1])
			{
				t=a[g];a[g]=a[g+1];a[g+1]=t;
			}
	}
	if(a[1]==a[i])my_printf("No");
	else
	{
		for(j=i;;j--)
		{
			if(a[j-1]!=a[j]){my_printf("%d",a[j-1]);break;}
		}
	}
	return 0;
}