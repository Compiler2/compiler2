#define NUM_ITER 79164

#include <header.h>

int main_bench()
{
	int s=0,n,a[100];
	my_scanf("%d",&n);
	int i ;
	for(i=0;i<n;i++){
		a[i]=i+1;
		if(a[i]%7==0||a[i]%10==7||(int)a[i]/10==7){
			continue;}
		else
			s+=a[i]*a[i];}
	my_printf("%d",s);
	return 0;
}
