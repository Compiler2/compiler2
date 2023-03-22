#define NUM_ITER 56563

#include <header.h>

int main_bench(){
	int n,i;
		my_scanf("%d\n",&n);
	int sz[100];
	for(i=0;i<n;i++){
	my_scanf("%d",&(sz[i]));
	}
	int s1,s2,s3,s4;
	s1=0;
	s2=0;
		s3=0;
		s4=0;
	for(i=0;i<n;i++){
		if(sz[i]<=18){
		s1+=1;
		}else if(sz[i]<=35){
		s2+=1;
		}else if(sz[i]<=60){
			s3+=1;
		}else{
			s4+=1;
		}
	}
double a,b,c,d;
a=1.0*s1/n*100;
b=1.0*s2/n*100;
c=1.0*s3/n*100;
d=1.0*s4/n*100;
my_printf("1-18: %.2lf%%\n",a);
my_printf("19-35: %.2lf%%\n",b);
my_printf("36-60: %.2lf%%\n",c);
my_printf("60??: %.2lf%%\n",d);
return 0;
}