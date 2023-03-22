#include <header.h>

int main_bench()
{
int a[100000],i,j,n,k,*p=a;
my_scanf("%d",&n);
for(i=0;i<n;i++)
	my_scanf("%d",&a[i]);                                
my_scanf("%d",&k);
p=a;
for(i=n-1;i>=0;i--)
{
	if(*(p+i)==k)                                       
	{
		for(j=i;j<n;j++)
		{
			*(p+j)=*(p+j+1);
		}
		n--;
	}
	                                                   
}
p=a;
for(i=0;i<n-1;i++)
{
	my_printf("%d ",*(p+i));
}
my_printf("%d",*(p+n-1));
return 0;
}