#include <header.h>

int main_bench()
{
	int i;
	for(i=0;;i++){
		int a,b,c,d,e,f;
		my_scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
		if(a==0){
			break;
		}else{
			int m;
			m=(d+12-a)*3600+(e-b)*60+f-c;
			my_printf("%d\n",m);
		}
	}
	return 0;
}