#define NUM_ITER 929070

#include <header.h>

int main_bench()
{
	int i,j,N;
	char ti[50],beiti[50];
	my_scanf("%s%s",&ti,&beiti);
	for(i=0;i<(strlen(beiti)-strlen(ti)+1);i++){
		N=0;
		for(j=0;j<strlen(ti);j++){
			if(beiti[i+j]==ti[j]){
				N++;
			}
		}
		if(N==strlen(ti)){
			my_printf("%d\n",i);
			break;
		}
	}
	return 0;
}