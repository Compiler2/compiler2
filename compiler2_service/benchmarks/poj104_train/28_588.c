#define NUM_ITER 1228261

#include <header.h>

int main_bench()
{
	int i,k=0,n;
	char str[2048];
	gets(str);
	n=strlen(str);
	for(i=0;i<n;i++)
		if(str[i]==' ') k++;
	if(k==0)
		my_printf("%d",n);
	else
	{
		k=0;
		for(i=0;i<n;i++)
		{
			if(str[i]==' ')
			{
				if(k!=0)
				{my_printf("%d,",k);k=0;}
				
			}
			else
					k++;
		}
		my_printf("%d",k);
	}
}