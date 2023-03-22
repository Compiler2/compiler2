#include <header.h>

int main_bench(){
	int n;
	int a,b;
	int sum=0;
	int i;
	int c=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d %d",&a,&b);
		if(a>=90&&a<=140&&b>=60&&b<=90){
			sum++;
		}
		else{
			if(sum>c){
				c=sum;
			}
			sum=0;
		}
	}
	if(c>=sum){
	my_printf("%d",c);
	}
	if(c<sum){
		my_printf("%d",sum);
	}

	return 0;
}