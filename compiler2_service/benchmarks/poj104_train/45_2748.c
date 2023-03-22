#include <header.h>

int f(char a[],char b[],int i)
{
	int j,s=1;
	for(j=0;a[j]!=0;j++)
	{if(a[j]!=b[i+j]){s=0;break;}}
	return(s);}
int main_bench()
{
	char a[60],b[60];
	int i,m,n;
	my_scanf("%s",a);m=strlen(a);
	my_scanf("%s",b);n=strlen(b);
	for(i=0;i<=n-m;i++)
		if(f(a,b,i)==1)break;
	my_printf("%d",i);
}


	