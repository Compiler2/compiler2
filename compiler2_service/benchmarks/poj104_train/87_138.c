#define NUM_ITER 15229

#include <header.h>

int main_bench(){
	int a,b,c,d,e,f,t;
	int i=0;
	while(i<100){
		my_scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
			if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0){
				break;
			}else{
				f=f+60;
				e=e+60-1;
				d=d+11;
				t=(d-a)*3600+(e-b)*60+(f-c);
				my_printf("%d\n",t);
				i++;
			}
	}return 0;
}
