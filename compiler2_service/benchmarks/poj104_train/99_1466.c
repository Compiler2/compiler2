#define NUM_ITER 55435

#include <header.h>


int main_bench()
{
	int n=0,i;
	int age[100]={0};
	double a=0,b=0,c=0,d=0;
	my_scanf("%d",&n);
	for (i=0;i<n;i++){
		my_scanf("%d",&age[i]);
		if(age[i]<19){
			a++;
		}
		if((18<age[i])&&(age[i]<=35)){
			b++;
		}
		if((35<age[i])&&(age[i]<=60)){
			c++;
		}
		if(age[i]>60) {
			d++;
		}
		
	}
	
	double p,q,r,s;
	p=a/n;
	q=b/n;
	r=c/n;
	s=d/n;
	my_printf("1-18: %.2lf%\n19-35: %.2lf%\n36-60: %.2lf%\n60??: %.2lf%\n",p*100,q*100,r*100,s*100);


	return 0;
}