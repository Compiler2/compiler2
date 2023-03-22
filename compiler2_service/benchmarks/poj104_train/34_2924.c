#include <header.h>

int shu(int a);

int main_bench(){
	int n,r;
	my_scanf("%d",&n);
	if(n==1){my_printf("End\n");return 0;}
	if(n%2==0){
		r=n/2;
		my_printf("%d/2=%d\n",n,r);
	}  
	if(n%2!=0){
		r=n*3+1;
		my_printf("%d*3+1=%d\n",n,r);
	}
	while(r!=1){
		r=shu(r);
	}
	if(r==1){
		my_printf("End\n");
	}
	return 0;
}



int shu(int a){
	int q;
	if(a%2==0){
			q=a/2;
            my_printf("%d/2=%d\n",a,q);
			return q;
		}
	if(a%2!=0){
			q=a*3+1;;
            my_printf("%d*3+1=%d\n",a,q);
			return q;
		}
	}
