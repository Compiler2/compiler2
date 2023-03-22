#define NUM_ITER 32170

#include <header.h>

int main_bench()
{
	int n,i,k,j,t;
	char str[32];
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%s",str);
		k=strlen(str);
		if(str[k-1]=='r'||str[k-1]=='y')
		{
			for(j=0;j<k-2;j++)
				{
					if(j<k-3)
					my_printf("%c",str[j]);
					if(j==k-3)
					my_printf("%c\n",str[j]);
			    }
		}
		if(str[k-1]=='g')
		{
			for(j=0;j<k-3;j++)
			{
				if(j<k-4)
				my_printf("%c",str[j]);
				if(j==k-4)
				my_printf("%c\n",str[j]);
			}
		}	
	}
	return 0;
}