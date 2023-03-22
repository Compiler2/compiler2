#include <header.h>


int main_bench()
{
	int n;
	char a[600];
	int ans[600]={0},mm=0;
	my_scanf("%d",&n);
	my_scanf("%s",&a);
	int i;
	i=0;
	int l=strlen(a);
	while (i+n<=l)
	{
		int j;
		ans[i]=1;
		for (j=i+1;j+n<=l;j++)
		{
			int ff=1;
			int k;
			for (k=0;k<n;k++)
			{
				if (a[i+k]!=a[j+k])
				{
					ff=0;break;
				}
			}
			if (ff) ans[i]++;
		}
		if (ans[i]>mm) mm=ans[i];
		i++;
	}
	if (mm>1)
	{
	my_printf("%d\n",mm);
	for (i=0;i+n<=l;i++)
	{
		if (ans[i]==mm)
		{
			int k;
			for (k=i;k<i+n;k++) my_printf("%c",a[k]);
			my_printf("\n");
		}
	}
	}
	else my_printf("NO");
	
	return 0;
}