#include <header.h>

int main_bench()
{
	int a[20000],t,j,m,i,asd;
	my_scanf("%d",&m);
	for(i=0;i<m;i++)
	{t=1;
	my_scanf("%d",&a[i]);
	if(i==0)
	{my_printf("%d",a[i]);}
	else if(i!=0)
	{
	for(j=0;j<i;j++)
    {asd=a[i]-a[j];
	if(asd==0)
	{t=0;
	break;}
	}if(t==1)
		my_printf(" %d",a[i]);
	
	}
	}
	
	my_printf("\n");
	return 0;
	}	
