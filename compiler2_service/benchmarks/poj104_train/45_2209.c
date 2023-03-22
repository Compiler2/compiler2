#define NUM_ITER 424781

#include <header.h>

int main_bench()
{
	char s[50],w[50];
	int i;
	my_scanf("%s %s",&s,&w);
	for(i=0;;i++){
		if(s[0]==w[i]){
			my_printf("%d",i);
			break;
		}
	}
	return 0;
}