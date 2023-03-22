#include <header.h>

int main_bench()
{
int n,a[100],i,zd,cd,t;
my_scanf("%d",&n);
for(i=0;i<=n-1;i++)
{
my_scanf("%d",&a[i]);
if(i==0)
zd=a[i];
if(a[i]>zd)
{
	zd=a[i];
     t=i;
}
}
  for(i=0;i<=n-1;i++)
  { if(i==0&&t!=0)
     cd=a[0];
    if(i==0&&t==0)
	{ cd=a[1];
	 continue;
	}
    if(i==t)
		continue;
	if(a[i]>cd)
		cd=a[i];
  }
my_printf("%d\n%d\n",zd,cd);

}