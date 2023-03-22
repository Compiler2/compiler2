#define NUM_ITER 941237

#include <header.h>

int main_bench()
{
	double bz,sj;
	int n1,n2,n,i,p;
	char jy1[501],jy2[501];
	my_scanf("%lf",&bz);
	my_scanf("%s",jy1);
	my_scanf("%s",jy2);
	p=0;
	n1=strlen(jy1);
	n2=strlen(jy2);
	if(n1==n2){
		n=n1;
	}else{
		my_printf("error");
		return 0;
	}
	for(i=0;i<n;i++){
		if((jy1[i]!=65&&jy1[i]!=84&&jy1[i]!=67&&jy1[i]!=71)||(jy2[i]!=65&&jy2[i]!=84&&jy2[i]!=67&&jy2[i]!=71)){
			my_printf("error");
			return 0;
		}else{
		if(jy1[i]==jy2[i]){
			p++;
		}else{
			p=p;
		}}
	}
	sj=1.0*p/n;
	if(sj>=bz){
		my_printf("yes");
	}else{
		my_printf("no");
	}
	return 0;
}
