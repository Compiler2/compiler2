#include <header.h>

int main_bench()
{
	int a[1000],b[1000]={0},n,*p,i,j,k=0;p=a;
	my_scanf("%d",&n);
for(i=0;i<n;i++,p++)
my_scanf("%d",p);
p=a;
for(i=0;i<n;i++,p++)
{
	for(j=0;j<i;j++)
		if(*(a+j)==*p)b[i]++;
}
for(i=n-1;i>=0;i--)
if(b[i]==0){k=i;break;}
p=a;

for(i=0;i<k;i++,p++)
{
	if(b[i]==0)
	{
		my_printf("%d,",a[i]);
	}
}
my_printf("%d",a[k]);
}



