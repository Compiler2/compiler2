#define NUM_ITER 48139

#include <header.h>

int main_bench()
{
	int i,n,m1=2,m2=0;
	int zzz[100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&zzz[i]);
	}
	for(i=0;i<n;i++){
		if(zzz[i]>m1){
			m1=zzz[i];
		}
	}
	for(i=0;i<n;i++){
		if(zzz[i]==m1){
			zzz[i]=0;
			break;
		}
	}
	for(i=0;i<n;i++){
		if(zzz[i]>m2){
			m2=zzz[i];
		}
	}
	my_printf("%d\n%d\n",m1,m2);
	return 0;
}