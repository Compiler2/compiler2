#define NUM_ITER 703951

#include <header.h>

int main_bench()
{
	int i,a[12],w,s;
	s=0;
	my_scanf("%d",&w);
	a[0]=a[12]=0;
	for(i=1;i<12;i++){
		if(i==2)
			a[i]=28;
		else if(i==4||i==6||i==9||i==11)
			a[i]=30;
		else
			a[i]=31;}
	for(i=0;i<12;i++){
		s=s+a[i];
		if((s+w)%7==0)
			my_printf("%d\n",i+1);}
	return 0;
}

