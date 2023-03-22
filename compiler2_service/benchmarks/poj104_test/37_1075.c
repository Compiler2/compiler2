#include <header.h>


char c[100010];
int main_bench()
{
	int n,i,j;
	my_scanf(" %d",&n);
	while(n--)
	{int flag=0;
		my_scanf("%s",c);
		int l=strlen(c);
		for(i=0;i<l;i++)
		{
			int num=0;
			for(j=0;j<l;j++)
			{
				if(c[j]==c[i]) num++;
			}
			if(num==1) {my_printf("%c\n",c[i]);flag=1;break;}
		}
		if(flag==0) my_printf("no\n");


	}

}