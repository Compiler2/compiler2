#define NUM_ITER 9321

#include <header.h>

int main_bench(){
	int a,b,c,d,e,f,y;
	while(1){
		my_scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
		if(a==0){
			break;
		}
		d=d+12;
		if(e>=b&&f>=c){
			y=(d-a)*3600+(e-b)*60+f-c;
		}else if(e>=b&&f<=c){
			y=(d-a)*3600+(e-b-1)*60+60+f-c;
		}else if(e<=b&&f>=c){
			y=(d-a-1)*3600+3600+(e-b)*60+f-c;
		}else if(e<=b&&f<=c){
			y=(d-a-1)*3600+3600+(e-b-1)*60+60+f-c;
		}
		my_printf("%d\n",y);
	}
	return 0;

}