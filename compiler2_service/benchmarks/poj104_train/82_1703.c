#include <header.h>

int main_bench()
{
	int n,x,y,i,t,total,max,a[100],b[100],c[100];
	for(i=0;i<=99;i++)
	{   
		a[i]=0;
		b[i]=0;
		c[i]=0;
	}

	my_scanf("%d",&n);
	for(i=0,t=0;i<=n-1;i++)
	{
		my_scanf("%d%d",&x,&y);
		if(x>=90&&x<=140&&y>=60&&y<=90)
		    a[t]=a[t]+1;
		else
		t=t+1;	
	}
max=a[0];
	for(i=0;i<=98;i++)
	{   
        if(max>a[i+1])
			total=max;
		else 
		{
			max=a[i+1];
		     total=max;
		}
	}
my_printf("%d\n",total);

	
	return 0;
}