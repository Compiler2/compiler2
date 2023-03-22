#include <header.h>

int main_bench(){
	int a,b,c,d,e,f,w;
	my_scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	w=(d+12-a-1)*3600+e*60+f+3600-b*60-c;
    my_printf("%d\n",w);
	while(a!=0){
		my_scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
		if(a!=0){
	w=(d+12-a-1)*3600+e*60+f+3600-b*60-c;
    my_printf("%d\n",w);
		}
		else
			break;
	}
	return 0;
}