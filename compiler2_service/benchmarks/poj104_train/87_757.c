#define NUM_ITER 145466

#include <header.h>

int main_bench(){
	int a,b,c,d,e,f,i=0,g[1000];
    while(1){
		my_scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
		if(a!=0&&d!=0){
		    g[i]=(d+12-a)*3600+(e*60+f)-(b*60+c);
			i++;
		}
		else
			break;
	}
	for(a=0;a<i;a++)
	my_printf("%d\n",g[a]);
	return 0;
}