#include <header.h>

int main_bench()
{
	void same(char a[],char b[]);
	char a[1000],b[1000];
	my_scanf("%s%s",a,b);
	same(a,b);
}
void same(char a[],char b[])
{
	int i,j,t,n;
	if(strlen(a)==strlen(b))
	{
	for(j=0;j<strlen(a)-1;j++)
		for(i=0;i<strlen(a)-1-j;i++)
			if(a[i]>=a[i+1])
			{
				t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
	for(j=0;j<strlen(b)-1;j++)
		for(i=0;i<strlen(b)-1-j;i++)
			if(b[i]>=b[i+1])
			{
				t=b[i];
				b[i]=b[i+1];
				b[i+1]=t;
			}
	for(i=0,n=0;i<strlen(a)-1;i++)
	{
		if(a[i]==b[i])
			n++;
		else break;
	}
	if(n==strlen(a)-1)
		my_printf("YES");
	else
		my_printf("NO");
	}
	else
		my_printf("NO");
}