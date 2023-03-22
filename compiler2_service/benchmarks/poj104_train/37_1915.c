#define NUM_ITER 21828

#include <header.h>

main_bench()
{
	int n,i;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		char a[100000];
		my_scanf("%s",a);
		int j,k,t,s=0;
		for(j=0;j<strlen(a);j++)
		{
			t=0;
			for(k=0;k<strlen(a);k++)
			if(a[k]==a[j])
			t++;
			if(t==1)
			{
				my_printf("%c\n",a[j]);
				break;
			}
			s++;
		}
		if(s==strlen(a))
		{
			my_printf("no\n");
			break;
		}
	}
	
}