#include <header.h>

int main_bench()
{
	int n,i,j,sz[100],a=0,b=0,c=0,d=0,e=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&sz[i]);
	}
	for(i=0;i<n;i++)
	{
		if(sz[i]<=18)
		{
			a++;
		}
		if(sz[i]>18&&sz[i]<=35)
		{
			b++;
		}
		if(sz[i]>35&&sz[i]<=60)
		{
			c++;
		}
		if(sz[i]>60)
		{
			d++;
		}
	}
	my_printf("1-18: %.2lf%%\n",(float)a/n*100);
    my_printf("19-35: %.2lf%%\n",(float)b/n*100);
		my_printf("36-60: %.2lf%%\n",(float)c/n*100);
	my_printf("60??: %.2lf%%\n",(float)d/n*100);



	return 0;
}