#include <header.h>

int a[1000],b[1000],c[2000];
int m,n;
int i,j,t;
void read()
{  my_scanf("%d %d",&m,&n);
   for(i=0;i<m;i++)
	   my_scanf("%d",&a[i]);
   for(i=0;i<n;i++)
	   my_scanf("%d",&b[i]);
}
void sort()
{
	for(i=0;i<m;i++)
	   {for(j=i+1;j<m;j++)
	{   if(a[j]<a[i])   {t=a[i];a[i]=a[j];a[j]=t;}}}
for(i=0;i<n;i++)
	   {for(j=i+1;j<n;j++)
	{   if(b[j]<b[i])   {t=b[i];b[i]=b[j];b[j]=t;}}}
}
void cat()
{
	for(i=0;i<m;i++)
		c[i]=a[i];
	for(i=m;i<m+n;i++)
		c[i]=b[i-m];
}
void print()
{for(i=0;i<m+n-1;i++)
my_printf("%d ",c[i]);
my_printf("%d",c[m+n-1]);
}

int main_bench()
{
    read();
	sort();
	cat();
	print();

	
}