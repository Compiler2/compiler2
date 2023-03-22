#include <header.h>

int main_bench()
{
	char a[100],b[100];
	int i,l1,l2,j;
	int m=0;
	my_scanf("%s%s",a,b);
	l1=strlen(a);
	l2=strlen(b);
	if(l1!=l2)
		my_printf("NO");
	else
	{
		for(i=0;i<l1;i++)
			for(j=0;j<l1;j++)
			{
				if(a[i]==b[j])
				{
					b[j]='\0';
					m=1;
					break;
				}
				else
					m=0;
			}
		if(m)
			my_printf("YES");
		else
			my_printf("NO");
	}
	
}