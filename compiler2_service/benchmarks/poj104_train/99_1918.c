#define NUM_ITER 52905

#include <header.h>

int main_bench()
{
	int n,age[100],i,s1=0,s2=0,s3=0,s4=0,sum;
	double a1,a2,a3,a4;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&age[i]);
		if(age[i]>=1&&age[i]<=18){
			s1++;

		}
		if(age[i]>=19&&age[i]<=35){
			s2++;
		}
        if(age[i]>=36&&age[i]<=60){
			s3++;
		}
        if(age[i]>60){
			s4++;
		}


	}
	sum=s1+s2+s3+s4;
	a1=(double)s1/sum*100;
    a2 =(double)s2/sum*100;
	a3=(double)s3/sum*100;
	a4=(double)s4/sum*100;
	my_printf("1-18: %.2lf",a1);
	my_printf("%%\n");
	my_printf("19-35: %.2lf",a2);
my_printf("%%\n");
	my_printf("36-60: %.2lf",a3);
my_printf("%%\n");
	my_printf("60??: %.2lf",a4);
my_printf("%%\n");
	return 0;
}

