#include <header.h>

int main_bench()
{
	int n,i,j,m;
	char c[800];
	my_scanf("%d\n",&n);
	for(i=1;i<=n;i++)
	{
		gets(c);
		m=strlen(c);
		if((c[0]>=65&&c[0]<=90)||(c[0]>=97&&c[0]<=122)||(c[0]==95))
		{
			for(j=0;j<=m-1;j++)
			{
				if(c[j]==' ')
				{
					my_printf("0\n");break;
				}
				if(c[j]<48)
				{
					my_printf("0\n");break;
				}
				if(c[j]>57&&c[j]<65)
				{
					my_printf("0\n");break;
				}
				if(c[j]>91&&c[j]<95)
				{
					my_printf("0\n");break;
				}
				if(c[j]>95&&c[j]<97)
				{
					my_printf("0\n");break;
				}
				if(c[j]>122)
				{
					my_printf("0\n");break;
				}
			}
			if(j==m)
				my_printf("1\n");
		}
		else
			my_printf("0\n");
	}
	return 0;
}
