#include <header.h>

	struct
	{
	int x;
	int y;
	int s;
	int z;
	}a[100010],t;
	
int main_bench()
{

	int n,i,j;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d%d%d",&a[i].x,&a[i].y,&a[i].s);
		a[i].z=a[i].y+a[i].s;
	}
	for(i=0;i<=2;i++)
		for(j=n-1;j>=i;j--)
		{
			if(a[j+1].z>a[j].z)
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
my_printf("%d %d\n",a[0].x,a[0].z);
my_printf("%d %d\n",a[1].x,a[1].z);
my_printf("%d %d\n",a[2].x,a[2].z);
return 0;
}
