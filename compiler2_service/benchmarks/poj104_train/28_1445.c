#define NUM_ITER 1378470

#include <header.h>

int main_bench(){
	char sz[3000];
        gets(sz);
	int jishu,i;
	jishu=0;
	int num=strlen(sz);
	for(i=0;;i++){
	    if(sz[i]!=32&&sz[i]!='\0')
			jishu++;
		else if(sz[i]==32&&jishu!=0){
			my_printf("%d,",jishu);
			jishu=0;}
		if(sz[i]=='\0'&&jishu!=0){
			my_printf("%d",jishu);
			break;
	}}
	return 0;
}
