#include <header.h>

int main_bench()
{
	int a[400],i,p,q=0,t,c;char h;
	i=0;
	my_scanf("%d",&a[0]);
	i=1;
	while(i<400)
	{
		my_scanf("%c",&h);
		if(h==',')
		{my_scanf("%d",&a[i]);
		i++;}
		else
		{c=i;break;}
	}
	if(c==1)
	{my_printf("No");}
	else 
	{
		if(a[1]>a[0])
		{p=a[1];q=a[0];}
	    else if(a[1]<a[0])
		{p=a[0];q=a[1];}
        else if(a[1]==a[0])
		{p=a[1];q=0;}
	    i=2;
	    for(i=2;i<c;i++)
		{  
		    if(a[i]>p)
			{q=p;p=a[i];}
		    else if(a[i]<p&&a[i]>=q)
			{ q=a[i];}
		}
	    if(q!=0)
		{
		     my_printf("%d",q);
		}
	    else
		{my_printf("No");}
	}
	return 0;
}
