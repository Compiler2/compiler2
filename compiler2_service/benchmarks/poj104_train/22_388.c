#define NUM_ITER 1711538

#include <header.h>


int main_bench()
{
	unsigned int a[300];
	char ch[299];
	int s=1;
	int i;
	for(i=1;i<=300;i++)
	{
		if(i==1) my_scanf("%u",&a[1]);
		else 
		{
			ch[i]=getchar();
			if(ch[i]!=',') break;
			else 
			{
				my_scanf("%u",&a[i]);
				s=s+1;
			}
		}

	}
	int exchange,j,k;
	for(j=1;j<=s;j++)
		for(k=j+1;k<=s;k++)
		{
			if(a[j]<a[k]) 
			{
                exchange=a[j];
				a[j]=a[k];
				a[k]=exchange;
			}
		}
	if(s==1) my_printf("No");
	else
	{
		for(i=1;i<=s-1;i++)
		{
		    if(a[i]!=a[i+1]) 
			{
				my_printf("%d",a[i+1]);
				break;
			}
		    else 
			{
				if(i==s-1) my_printf("No");
                else continue;
			}
		}
    }

	return 0;


}