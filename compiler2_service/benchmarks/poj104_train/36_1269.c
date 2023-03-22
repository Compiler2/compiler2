#include <header.h>

int main_bench()
{
	char a[10000],b[10000];

	int s1,i,j,s2;
	int p=1;
	for(i=0;i<100;i++)
		a[i]=b[i]='\0';
	my_scanf("%s%s",a,b);
	s1=strlen(a);
	s2=strlen(b);
	if(s1!=s2) my_printf("NO");
	else
	{
		for(i=0;i<s1;i++)
			for(j=0;j<s1;j++)
			{
				if(a[i]==b[j])
				{	a[i]='\0';
					b[j]='\0';
				}
			}
		for(i=0;i<s1;i++)
			if(a[i]!='\0')
				p=0;
		if(p) my_printf("YES");
		else my_printf("NO");
	}
	return 0;
}
