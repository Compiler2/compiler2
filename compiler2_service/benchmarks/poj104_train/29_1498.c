#define NUM_ITER 124

#include <header.h>

int fei(int n);
int main_bench()
{
	int n,i,j,a;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&a);
		double s=0;
		for(j=1;j<=a;j++){
			s+=(double)(1.0*fei(j+1)/fei(j));
		}
		my_printf("%0.3lf\n",s);
	}
	return 0;
}

int fei(int n){
	int f,i;
	int p1=1,p2=2;
	if(n==1){
		return p1;
	}else if(n==2){
		return p1+p1;
	} else{
        for(i=0;i<n-2;i++){
	     	f=p2+p1;
		    p1=p2;
	    	p2=f;
		}
		return p2;
	}
}
