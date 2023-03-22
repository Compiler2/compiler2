#define NUM_ITER 4429

#include <header.h>

int main_bench(){
	int m,i,j,lim[200],fm[200],fz[200];
	double res;
	my_scanf("%d",&m);
	for(i=0;i<m;i++){
		my_scanf("%d",&(lim[i]));
	}
            fm[0]=1;
			fz[0]=2;
	for(i=0;i<m;i++){
            res=2.000;
		for(j=1;j<lim[i];j++){
			fm[j]=fz[j-1];
			fz[j]=(fm[j-1]+fz[j-1]);
            res+=10*(0.1*fz[j]/fm[j]);
			
		}
			my_printf("%.3lf\n",res);
	}
	return 0;
}
