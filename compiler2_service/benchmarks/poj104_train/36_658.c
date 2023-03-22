#include <header.h>

int main_bench()
{
	char a[50]={0},b[50]={0};
	int n,m,i,j,x=0;
	my_scanf("%s",a);
	my_scanf("%s",b);
    n=strlen(a);
	m=strlen(b);
	if(m!=n)my_printf("NO");
	else
	{
		for(i=0;i<n;i++)
		for(j=0;j<n;j++)
	{
		if(b[j]==a[i])
		{
			b[j]=0;
			break;
		}
	}
	for(i=0;i<n;i++)
		if(b[i]!=0)x=1;
	if(x==0)my_printf("YES");
	else my_printf("NO");
	}
}