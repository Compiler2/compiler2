#include <header.h>

int main_bench()
{
int n,i,m=0,q=0;
int a[201],b[201];
my_scanf("%d",&n);
for(i=0;i<n;i++)
my_scanf("%d %d",&a[i],&b[i]);
for(i=0;i<n;i++)
{
	if(a[i]-b[i]==-1||a[i]-b[i]==2)
	m++;
	else if(a[i]==b[i])
    m=m+1-1;
	else if(a[i]-b[i]==1||a[i]-b[i]==-2)
	q++;		
}
if(m==q)
my_printf("Tie");
else if(m>q)
my_printf("A");
else if(m<q)
my_printf("B");
return 0;
}