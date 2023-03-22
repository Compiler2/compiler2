#define NUM_ITER 26171

#include <header.h>


int main_bench()
{
	int n,i,j;
	my_scanf("%d",&n);
	while(n--)
	{
		int len,flag=1;
		char c[100001];
		my_scanf("%s",c);
		len=strlen(c);
		for(i=0;i<len;i++)
		{
			int isbreak=0;
			for(j=0;j<i;j++)
			{
				if(c[j]==c[i])
				{
					isbreak=1;
					break;
				}
			}
			if(isbreak)continue;
			for(j=i+1;j<len;j++)
			{
				if(c[j]==c[i])
				{
					isbreak=1;
					break;
				}
			}
			if(isbreak)continue;
			my_printf("%c",c[i]);
			flag=0;
			break;
		}
		if(flag)
			my_printf("no");
		if(n)
			my_printf("\n");
	}
	return 0;
}