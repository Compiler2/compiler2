#include <header.h>

int main_bench()
{
	int a,y,i;
	float m,n,p,q;
	my_scanf("%d",&y);
	m=0;
	n=0;
	p=0;
	q=0;
	for(i=0;i<y;i++){
		my_scanf("%d",&a);
		if(a<=18){
			m++;
		}
		else if(a<=35&&a>18){
			n++;
		}
		else if(a>35&&a<=60){
			p++;
		}
		else if(a>60){
			q++;
		}
	}
	my_printf("1-18: %.2f%%\n19-35: %.2f%%\n36-60: %.2f%%\n60??: %.2f%%\n",m*100/y,n*100/y,p*100/y,q*100/y);
	return 0;
}