#define NUM_ITER 10920

#include <header.h>

int main_bench()
{
	int i, j, n,sum, a,b,c,d,e,f,h=0,m=0,s;
	char y;
	for(i=0;;i++){
		my_scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
		if(a!=0){
			if(e>=b&&f>=c){
				h=d+12-a;
				m=e-b;
				s=f-c;
			}
			if(e<b&&f>=c){
				h=d+11-a;
				m=e-b+60;
				s=f-c;
			}
			if(e<b&&f<c){
				h=d+11-a;
				m=e-b+59;
				s=f-c+60;
			}
			if(e>=b&&f<c){
				h=d+12-a;
				m=e-b-1;
				s=f-c+60;
			}
		}
		if(a==0){
			break;
		}
		sum=h*3600+m*60+s;
		my_printf("%d\n",sum);
	}


	return 0;
}