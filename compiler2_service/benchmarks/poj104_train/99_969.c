#define NUM_ITER 55856

#include <header.h>

int main_bench()
{
	int n,sz[100],a=0,b=0,c=0,d=0,i;
	double p,q,r,s,e1,e2,e3,e4;
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		my_scanf("%d",&(sz[i]));
	}
	for(i=0;i<n;i++){
		if(sz[i]<=18){
			a++;
		}
		else if((sz[i]>18)&&(sz[i]<=35)){
			b++;
		}
		else if((sz[i]>35)&&(sz[i]<=60)){
			c++;
		}
		else{
			d++;
		}
	}
	p=a;
	q=b;
	r=c;
	s=d;
	e1=p/n;
	e2=q/n;
	e3=r/n;
	e4=s/n;
	my_printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%\n",e1*100,e2*100,e3*100,e4*100);
	return 0;
}
