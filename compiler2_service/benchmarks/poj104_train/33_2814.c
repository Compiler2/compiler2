#include <header.h>

int main_bench()
{
	int n,jishu;
	int i,j;
	char jianji[1001];
	my_scanf("%d\n`", &n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=1000;j++)
		{
			jianji[j]=getchar();
			if(jianji[j]=='\n')
			{
				jishu=j;break;
			}
		}
		for(j=1;j<=jishu;j++)
		{
			switch(jianji[j])
			{
			case 'A':
			my_printf("T");break;
			case 'T':
				my_printf("A");break;
			case 'C':
				my_printf("G");break;
			case 'G':
				my_printf("C");break;
			default:
				my_printf("\n");break;
			}
		}
	}
	return 0;
}

