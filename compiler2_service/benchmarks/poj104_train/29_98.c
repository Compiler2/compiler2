#include <header.h>

int main_bench(){
	int n,f0,f1,f2,f01,f11,f21;
	int i,j,k[100];
	double s=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&(k[i]));
	}
	for(i=0;i<n;i++){
		f0=2;
		f1=3;
		f01=1;
		f11=2;
		if(k[i]==1){
			s=f0*1.0/f01;
			my_printf("%.3lf\n",s);
		}else if(k[i]==2){
			s=f1*1.0/f11;
			my_printf("%.3lf\n",s+2);		
		}else{
			s=3.5;
			for(j=3;j<=k[i];j++){
				f2=f1+f0;
				f21=f11+f01;
				s+=f2*1.0/f21;
				f0=f1;
				f1=f2;
				f01=f11;
				f11=f21;
			}
			my_printf("%.3lf\n",s);
		}
	}
	return 0;
}
