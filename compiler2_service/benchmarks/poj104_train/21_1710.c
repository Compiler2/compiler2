#define NUM_ITER 37798

#include <header.h>

int main_bench()
{
	int n,i,a[300],sum=0,k[300],m=0,j;
	double ave,c[300],d;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){sum=sum+a[i];}
	ave=1.0*sum/n;
	for(i=0;i<n;i++){
		if(a[i]*1.0-ave>=0){c[i]=a[i]*1.0-ave;}
		else{c[i]=ave-a[i]*1.0;}
	}
	d=c[0];
	for(i=1;i<n;i++){
		if(d<c[i]){d=c[i];}
	}
	for(i=0;i<n;i++){

		if(c[i] == d){
			k[m] = a[i];
			m++;
		}
	

	}


	if(m==1){my_printf("%d",k[0]);}
	else if(m>1){
		for(j=0;j<m-1;j++){my_printf("%d,",k[j]);}
		my_printf("%d",k[m-1]);
	}





	
}
	
