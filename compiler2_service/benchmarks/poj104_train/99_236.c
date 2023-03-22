#define NUM_ITER 57454

#include <header.h>

int main_bench(){
	int n,count1=0,count2=0,count3=0,count4=0,age,i;
	double p1,p2,p3,p4;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&age);
		if(age<=18)count1++;
		if(age>18&&age<36)count2++;
		if(age>35&&age<=60)count3++;
		if(age>60)count4++;
	
	}
	p1=1.0*100*count1/n;
	p2=1.0*100*count2/n;
	p3=1.0*100*count3/n;
	p4=1.0*100*count4/n;

	my_printf("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%",p1,p2,p3,p4);
	
	return 0;
}