#include <header.h>

int main_bench()
{
	int m,a[3]={0},i,j,p=0;
	my_scanf("%d",&m);
	if(m%3==0)
		a[0]=3;
	if(m%5==0)
		a[1]=5;
	if(m%7==0)
		a[2]=7;
	for(i=0;i<2;i++)
	{
        if(a[i]>0)
		{
		for(j=i+1;j<3;j++)
		{if(a[j]>0)
		p=1;}
		if(p==1)
         my_printf("%d ",a[i]);
		else if(p==0)
			my_printf("%d",a[i]);}
		p=0;
	}
	if(a[2]>0)
		my_printf("%d",7);
	if(m%3!=0&&m%5!=0&&m%7!=0)
		my_printf("n");
	return 0;
}