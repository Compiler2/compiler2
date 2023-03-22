#define NUM_ITER 38976

#include <header.h>

int main_bench(){
int n;
my_scanf("%d",&n);
int i,a,b,c,m=0,k=0;
for(i=0;i<n;i++){
	my_scanf("%d%d",&a,&b);
	if(i!=n-1){	
		if(a>=90&&a<=140&&b>=60&&b<=90){
			k++;
		}
		else{
			if(k>m){
				m=k;
				k=0;
			}
			else{
				k=0;
			}
		
		}
	}
	else{
		if(a>=90&&a<=140&&b>=60&&b<=90){
			k++;
			if(k>m){
				m=k;
			}
		}
		else{
			if(k>m){
				m=k;
			}
		}

	}
}
my_printf("%d",m);
return 0;
}
