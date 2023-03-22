#include <header.h>

int main_bench()
{
	int m,n,p[200]={0},i=0,j=0,b=0,c=10;
	char q[10];
my_scanf("%d",&n);
gets(q);
char a[200][200];
for(i=0;i<n;i++)
{
my_scanf("%s",&a[i]);
}
for(i=0;i<n;i++)
{
p[i]=strlen(a[i]);
}
for(i=0;i<n;i++)
{
if(b<p[i])
b=p[i];
}
for(i=0;i<n;i++)
{
if(c>p[i])
c=p[i];
}
for(i=0;i<n;i++)
{
if(p[i]==b)
{
	
		my_printf("%s\n",a[i]);
	break;
}
}
for(i=0;i<n;i++)
{
if(p[i]==c)
{
	
		my_printf("%s",a[i]);
	break;
}
}
return 0;
}