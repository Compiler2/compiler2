#include <header.h>

int n;
int main_bench(){
	int x,k,sum,now;
	my_scanf("%d",&n);int t=n;
	while (n--){
		sum=now=0;
		my_scanf("%d",&x);
		
		while (x--){
			my_scanf("%d",&k);
			if(k-sum+now>60) continue;
			else now+=k-sum+3,sum=k;
			
		}
		if(now<60) sum+=60-now;
		my_printf("%d\n",sum);
	}
	return 0;
}