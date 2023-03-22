#include <header.h>

int main_bench(){
	int n,a,b,k=0,m=0;
	my_scanf("%d",&n);
	for(int i=1;i<=n;i++){
		my_scanf("%d%d",&a,&b);
		if(a>=90&&a<=140&&b>=60&&b<=90){
			m++;
		}else{
			if(m>k){
				k=m;
				
			}
				m=0;
		}
	}
	if(k>m){my_printf("%d",k);

	}else{my_printf("%d",m);

	}
	
	return 0;
}