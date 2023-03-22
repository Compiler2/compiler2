#include <header.h>


int main_bench()
{
	int n,i,a[300],s=0;
	double t,max=0;
	int x,y,flag;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&a[i]);
		s+=a[i];
	}
	t=(float)s/n;
	for(i=0;i<n;i++)
	{
		if(fabs(a[i]-t)>max)
		{
			x=a[i];
			max=fabs(a[i]-t);
			flag=0;
		}
		else if(fabs(a[i]-t)==max)
		{
			y=a[i];
			flag=1;
		}
	}
	if(flag){
		if(x>y){
			my_printf("%d,%d",y,x);
		}
		else{
			my_printf("%d,%d",x,y);
		}
	}
	else{
		my_printf("%d",x);
	}
	return 0;

}

