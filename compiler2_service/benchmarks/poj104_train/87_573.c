#define NUM_ITER 13651

#include <header.h>

int main_bench()
{
	int a,b,c,d,e,f,s,i;
	for(i=0;1;i++){
		my_scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
		if(a==0)
			break;
		if(a!=0){
		s=3600*(d+12-a)+60*(e-b)+f-c;
		my_printf("%d\n",s);
		}
	}
	return 0;
}