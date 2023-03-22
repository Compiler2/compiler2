#include <header.h>



int main_bench()
{
	int g,time,n,a[100],m,i;

my_scanf("%d",&n);

while(n--)
{
	my_scanf("%d",&m);
	g=0;
	time=0;

	memset(a,0,sizeof(a));
	
	for(i=0;i<m;i++)
		my_scanf("%d",&a[i]);
	
	i=0;

	if(m==0) my_printf("60\n");
	else 
	{
		for(i=0;i<m;i++)
	{
        time=a[i]+3*i;
		g=a[i];
		if(time<=60 && time>=57 ) 
		{
			my_printf("%d\n",g);break;
		}
		if(time>60) 
		{
			my_printf("%d\n",g-(time-60));break;
		}
	
	}

    if(time<57) my_printf("%d\n",g+(60-time)-3);
	}


	
}

	
}