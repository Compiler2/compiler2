#define NUM_ITER 1238190

#include <header.h>


void doit(char a[],int n)
{
	int i,j;
	for(i=1;i<n;i++)
	{
		if(a[i]!=a[0]&&a[i]!='\0')break;
	}
	for(j=i-1;j>-1;j--)
	{
		if(a[j]==a[0])break;
	}
	my_printf("%d %d\n",j,i);
	a[j]='\0',a[i]='\0';
	if(a[0]!='\0')doit(a,n);
}

int main_bench()
{
	char a[100];
	int n;
	my_scanf("%s",a);
	n=strlen(a);
	doit(a,n);
}

