#define NUM_ITER 33071

#include <header.h>


int main_bench()
{
	
	int n;
	my_scanf("%d",&n);
	int i;
	for(i=0;i<n;i++)
	{
		char c[100];
		my_scanf("\n%s",c);
        int k;
		for(k=0;;k++)
		{
			if(c[k]=='\0')
				break;
		}
		if(c[k-1]=='r'||c[k-1]=='y')
		{
			c[k-1]='\0';
            c[k-2]='\0';
		}
        else
		{
			c[k-1]='\0';
            c[k-2]='\0';
			c[k-3]='\0';
		}
		my_printf("%s\n",c);
	}
	return 0;
}

