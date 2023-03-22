#include <header.h>

int main_bench()
{
	char a1[1000],a2[1000],b;
	int i,j,n1,n2,c=1;
	my_scanf("%s",a1);
	my_scanf("%s",a2);
	n1=strlen(a1);
	n2=strlen(a2);
	for(i=0;i<(n1-1);i++)
	{
		for(j=0;j<(n1-i-1);j++)
			if(a1[j]>a1[j+1])
			{
				b=a1[j+1];
				a1[j+1]=a1[j];
				a1[j]=b;
			}
			
	}
	for(i=0;i<(n2-1);i++)
	{
		for(j=0;j<(n2-i-1);j++)
			if(a2[j]>a2[j+1])
			{
				b=a2[j+1];
				a2[j+1]=a2[j];
				a2[j]=b;
			}
			
	}
	c=strcmp(a1,a2);
	if(c==0)
		my_printf("YES");
	else
		my_printf("NO");
return 0;
}
