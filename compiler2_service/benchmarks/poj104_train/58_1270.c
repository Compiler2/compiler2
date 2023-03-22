#define NUM_ITER 34715

#include <header.h>


int fit(char *p){
	if((*p>=65&&*p<=90)||(*p>=97&&*p<=122)||*p==95){
		p++;
	}else{
		return 0;
	}
	for(;*p!='\0';p++){
		if((*p>=65&&*p<=90)||(*p>=97&&*p<=122)||*p==95||(*p>=48&&*p<=57)){
			continue;
		}else{
			return 0;
		}
	}
	return 1;
}
int main_bench()
{
	int n,i;
	char sz[81],*p;
	p=sz;
	my_scanf("%d",&n);
	getchar();
	for(i=0;i<n;i++){
		gets(p);
		if(fit(p)){
			my_printf("1\n");
		}else{
			my_printf("0\n");
		}
	}
	return 0;
}
