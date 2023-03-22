#include <header.h>

main_bench()
{
	int n,i,j,k;
	my_scanf("%d",&n);
	char a[233333];
	for(k=0;k<n;k++)
	{
		int b[233333]={0};
		my_scanf("%s",a);
		for(i=0;a[i]!='\0';i++)
		{
			for(j=0;a[j]!='\0';j++)
			{
				if(a[i]==a[j])
				b[i]++;
			}
		}
		j=0;
		for(i=0;a[i]!='\0';i++)
		{
			if(b[i]==1)
			{
				j=1;
				break;
			}
		}
		if(j==0)
		{
			my_printf("no\n");
		}
		else
		my_printf("%c\n",a[i]);
	}
}