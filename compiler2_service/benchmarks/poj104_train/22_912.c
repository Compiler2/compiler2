#define NUM_ITER 107525

#include <header.h>

int main_bench()
{
	int m,i=0,j,k,t;
	int a[300];
	char c;
	while(1)
	{
		my_scanf("%d",&a[i++]);
		my_scanf("%c",&c);
		if(c=='\n') break;
	}
	if(i==1) 
	{
		my_printf("No\n");
		return 0;
	}
	for(j=0;j<i-1;j++)
	{
		for(k=0;k<i-j-1;k++)
		{
			if(a[k]<a[k+1])
			{
				m=a[k];
				a[k]=a[k+1];
				a[k+1]=m;
			}
		}
	}
	for(j=0;j<i-1;j++)
	{
		t=0;
		if(a[j]>a[j+1])
		{
			t=1;
			my_printf("%d",a[j+1]);
			break;
		}
	}
	if(t==0) my_printf("No\n");
	return 0;
}
		