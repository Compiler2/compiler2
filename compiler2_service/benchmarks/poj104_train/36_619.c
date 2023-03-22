#include <header.h>

int main_bench()
{
	int n,i,j,p=0;
	char a[50],b[50];
	my_scanf("%s %s",a,b);
	n=strlen(a);
	if(n!=strlen(b))my_printf("NO");
	else
	{
		for(i=0;i<n;i++)
		{
			p=0;
			for(j=0;j<n;j++)
			{
				if(a[i]==b[j])
				{
					p=1;
					b[j]=2;
					break;
				}
			}
			if(p==0)
			{
				my_printf("NO");
				p=3;
				break;
			}
		}
		if(p!=3)
			my_printf("YES");
	}
}