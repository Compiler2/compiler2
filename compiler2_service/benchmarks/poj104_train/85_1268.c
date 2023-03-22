#include <header.h>

int main_bench()
{
	char a[30];
	int n,i,j,k;
	my_scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		gets(a);
		j=0;k=0;
		while(a[j]!=0)
		{
			if(j==0&&(a[j]!='_')&&(a[j]<'A'||a[j]>'Z')&&(a[j]<'a'||a[j]>'z'))
			{
				k=1;
				break;
			}
			if(j!=0&&(a[j]!='_')&&(a[j]<'A'||a[j]>'Z')&&(a[j]<'a'||a[j]>'z')&&(a[j]<'0'||a[j]>'9'))
			{
				k=1;
				break;
			}
			j++;
		}
		if(k)
			my_printf("no\n");
		else
			my_printf("yes\n");
	}
	return 0;
}