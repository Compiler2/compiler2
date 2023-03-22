#define NUM_ITER 1155475

#include <header.h>

int main_bench()
{
	char a[50],b[50];
	int i,j,s,k;
	my_scanf("%s",a);
	my_scanf("%s",b);
	for(i=0;a[i]!='\0';i++)
	{
		j=i;
	}
	for(i=0;b[i]!='\0';i++)
	{
		if(b[i]==a[0])
		{
			s=j;
			for(k=0;k<j;k++)
			{
				if(b[i+k]==a[k])
					s=s-1;
			}		
			if(s==0)
			{
				my_printf("%d\n",i);
				break;
			}
			
		}
	}
}