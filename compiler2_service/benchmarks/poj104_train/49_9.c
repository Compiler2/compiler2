#define NUM_ITER 1327791

#include <header.h>

int main_bench()
{
	char a[500];
	int i,j,n,length;
	gets(a);
	length=strlen(a);
	for(i=0;i<length;i++)
	{
		if(a[i]==a[i+1])
		{
			for(j=i;j<i+1;j++)
				my_printf("%c",a[j]);
			my_printf("%c\n",a[j]);
		}
	}
	for(n=1;n<length;n++)
	{
		for(i=0;i<length-n-1;i++)
		{
			if(a[i+1]==a[i])
			{
				if(a[i+n+1]==a[i-n])
				{
					if(a[i+n]==a[i-n+1])
					{
						for(j=i-n;j<i+n+1;j++)
							my_printf("%c",a[j]);
						my_printf("%c\n",a[j]);
					}
				}
			}
		}
	}
	return 0;
}