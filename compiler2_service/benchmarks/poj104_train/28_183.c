#define NUM_ITER 1458999

#include <header.h>

int main_bench()
{
	char str[30000];
	int i,n,k,flag=0,num=0,a[300];
	gets(str);
	n=0;
	i=0;
	while(str[i]!='\0')
	{
		n++;
		i++;
	}
	for(i=0;i<n;i++)
	{
	    if(str[i]==' ')
			flag=0;
		else if(flag==0)
		{
			flag=1;
			num++;
		}
	}
	for(i=0;i<num;i++)
	{
		static int j=0;
		k=0;
		for(;j<n;j++)
		{
			if(str[j]==' ')
				continue;
			else
			{
			    k++;
				if(str[j+1]==' ')
				{
					j=j+1;
					break;
				}
			}
		}
		a[i]=k;
	}
	for(i=0;i<num;i++)
	{
		if(i==num-1)
			my_printf("%d",a[i]);
		else
			my_printf("%d,",a[i]);
	}

	return 0;
}