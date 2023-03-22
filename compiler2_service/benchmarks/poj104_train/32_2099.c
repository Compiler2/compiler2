#define NUM_ITER 12228

#include <header.h>

int main_bench()
{
	int j,n,la,lb,i;
	char a[101];
	char b[101];
    
    
	
	
	my_scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		my_scanf("%s",a);
		my_scanf("%s",b);
		la=strlen(a);
		lb=strlen(b);
		for(i=0;i<lb;i++)
		{
			if(a[la-1-i]>=b[lb-1-i])
				a[la-1-i]=a[la-1-i]-b[lb-1-i]+'0';
			else if(a[la-1-i]<b[lb-1-i])
			{
				a[la-1-i]=a[la-1-i]+10-b[lb-1-i]+'0';
				a[la-2-i]=a[la-2-i]-1;
			}
			
		}
	my_printf("%s\n",a);	
	}
}
