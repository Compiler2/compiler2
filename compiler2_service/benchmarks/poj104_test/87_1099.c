#define NUM_ITER 15779

#include <header.h>

int main_bench(){
	int i,a,b,c,d,e,f,sum;
	sum=0;
	for(i=0;i<100;i++){
		my_scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
		if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0){
			break;
		}
		else{
		sum=(60-c)+(60-b-1)*60+(12-a-1)*60*60+
			f+e*60+d*60*60;
		my_printf("%d\n",sum);
		}
	}
	return 0;
}
