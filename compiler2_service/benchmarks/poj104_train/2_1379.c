#include <header.h>

int main_bench()
{
	int n,i,a[1000],m[1000];
	struct {
		char b[26];
	}p[1000];
	int j,k;
	my_scanf("%d",&n);
	char c[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
	int num[26]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
	for (i=0;i<n;i++)
	{
		my_scanf("%d %s",&a[i],p[i].b);
		m[i]=strlen(p[i].b);		
		for (k=0;k<26;k++)
			for (j=0;j<m[i];j++)
			{
				if (p[i].b[j]==c[k])
					num[k]++;
			}
		
	}
	int max=0,local=0;
	for (k=0;k<26;k++)
	{
		if (num[k]>max)
		{
			max=num[k];
			local=k;
		}
	}	
	my_printf("%c\n",c[local]);
	my_printf("%d\n",max);
	for (i=0;i<n;i++)
	{
		for (j=0;j<m[i];j++)
		{
			if (p[i].b[j]==c[local])
			my_printf("%d\n",a[i]);
		}
	}

	return 0;
}