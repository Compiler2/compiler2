#include <header.h>

int main_bench()
{int n=0;
    my_scanf("%d",&n);
    int i=0,as[100];
    while(i<n)
	{my_scanf("%d",&as[i]);
	i++;
	}
int zx[100];
i=0;
while(i<n)
{
	zx[i]=as[i];
	i++;
}
i=n-1;
while(i>0)
{
	my_printf("%d ",zx[i]);
		i--;
}
my_printf("%d",zx[0]);
}