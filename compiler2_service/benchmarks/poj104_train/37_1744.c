#define NUM_ITER 25950

#include <header.h>

main_bench()
{
	int t,i,j,flag,len;
	char a[100000];
	my_scanf("%d\n",&t);
	
	while(t--)
	{
		gets(a);
		len=strlen(a);
		for(i=0;i<len;i++)
		{
			flag=1;
			if(a[i]=='@') continue;
			for(j=i+1;j<len;j++)
				if(a[i]==a[j])
				{
					a[j]='@';
					flag=0;
				}
			if(flag==1)
			{
				putchar(a[i]);
				break;
			}
		}
		if(i==len) my_printf("no");
		putchar(10);
	}
  
}
