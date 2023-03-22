#define NUM_ITER 36886

#include <header.h>


int main_bench()
{
	char a[21];
	int i,j,n,b;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		b=1;
		my_scanf("%s",a);
		for(j=0;;j++)
		{	
			if(a[j]=='\0')
			{
				break;
			}
				if(a[0]>='0'&&a[0]<='9')
			{
				my_printf("no\n");
				b=0;
				break;
			}
			if(!((a[j]>='A'&&a[j]<='Z')||((a[j]>='a')&&a[j]<='z')||a[j]=='_'||(a[j]>='0'&&a[j]<='9')))
			{
				my_printf("no\n");
				b=0;
			    break;
			}
			
		}
		if(b==1)
		{
			my_printf("yes\n");
		}
	}
	return 0;
}
