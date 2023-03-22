#include <header.h>

int main_bench()
{
	int a,b,c,d,e,f,m1,m2,m;
	while(1){
		my_scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
		if(a!=0){
			m2=f+e*60+(d+12)*60*60;
			m1=c+b*60+a*60*60;
			m=m2-m1;
			my_printf("%d\n",m);
		}
		else
			break;
	}
	return 0;
}