#define NUM_ITER 54793

#include <header.h>

int main_bench()
{
	int n,s[100],i,a=0,b=0,c=0,d=0;
	double n1,n2,n3,n4;
	my_scanf("%d\n",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&s[i]);
	}
	for(i=0;i<n;i++){
		if(s[i]<19){
			a+=1;
		}
		else if(s[i]>18&&s[i]<36){
			b+=1;
		}
		else if(s[i]>35&&s[i]<61){
			c+=1;
		}
		else if(s[i]>60){
			d+=1;
		}
	}
	n1=(double)a*100/n;
	n2=(double)b*100/n;
	n3=(double)c*100/n;
	n4=(double)d*100/n;
	my_printf("1-18: %.2lf%%\n",n1);
	my_printf("19-35: %.2lf%%\n",n2);
	my_printf("36-60: %.2lf%%\n",n3);
	my_printf("60??: %.2lf%%",n4);
	return 0;
}