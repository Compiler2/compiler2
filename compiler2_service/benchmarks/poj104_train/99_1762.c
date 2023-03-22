#include <header.h>

int main_bench(){
	int n,i;
	int nianlin[100];
	int a=0,b=0,c=0,d=0;
	double e,f,g,h;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&nianlin[i]);
	}
	for(i=0;i<n;i++)
	{
		if(nianlin[i]<=18&&nianlin[i]>=1)
		{
			a+=1;
		}
		if(nianlin[i]<=35&&nianlin[i]>=19)
		{
			b+=1;
		}
		if(nianlin[i]<=60&&nianlin[i]>=36)
		{
			c+=1;
		}
		if(nianlin[i]>=61)
		{
			d+=1;
		}
	}
	e=a*1.0/n*100;
	f=b*1.0/n*100;
	g=c*1.0/n*100;
	h=d*1.0/n*100;
	my_printf("1-18: %.2lf%%\n",e);
	my_printf("19-35: %.2lf%%\n",f);
	my_printf("36-60: %.2lf%%\n",g);
	my_printf("60??: %.2lf%%\n",h);
	return 0;
}
