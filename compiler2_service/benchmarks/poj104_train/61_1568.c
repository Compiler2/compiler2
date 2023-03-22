#define NUM_ITER 4538

#include <header.h>

int F(int n);

int main_bench()
{
	int n[1000],a[1000],k,i;
	my_scanf("%d",&k);
	for(i=0;i<k;i++){
		my_scanf("%d",&n[i]);
		a[i]=F(n[i]);
	}
	for(i=0;i<k;i++){
		my_printf("%d\n",a[i]);}

	return 0;
}
int F(int n){
	int f1=1,f2=1,f3=f1+f2,i;
	if(n==1){return 1;}
	else if(n==2){return 1;}
	else{
		for(i=2;i<n;i++){
			f3=f1+f2;
			f1=f2;
			f2=f3;
		}
		return f3;
	}
}
