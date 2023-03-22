#include <header.h>

int main_bench(){
	int sum=0,t=0;
	int n;
	my_scanf("%d",&n);
	for(n;n>0;n--){
	int a,b;
    my_scanf("%d %d",&a,&b);
	if(a>=90 && a<=140 && b>=60 && b<=90){
		sum=sum+1;
		if(t<=sum){
			t=sum;
		}
	}
	else{sum=0;
	}
	}
my_printf("%d",t);
return 0;
}