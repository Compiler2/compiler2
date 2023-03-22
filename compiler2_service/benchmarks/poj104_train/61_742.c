#include <header.h>

int main_bench(){
	int a,b,n,i,j,z[100],x[100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d",&(z[i]));
	}
	for(i=0;i<n;i++){
		for(j=1;j<=z[i];j++){
			if(j==1){
				a=1;
				x[i]=a;
			}
			if(j==2){
                b=1;
				x[i]=b;
			}
			if(j>2){
                x[i]=a+b;
				a=b;
				b=x[i];
			}
		}
	}
	for(i=0;i<n;i++){
		my_printf("%d\n",x[i]);
	}
	return 0;
}