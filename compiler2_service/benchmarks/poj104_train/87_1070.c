#define NUM_ITER 9590

#include <header.h>

int main_bench(){
    int sz[7],i,sum=0,j=0;
	for(i=0;;i++){
        for(j=0;j<6;j++){
			my_scanf("%d",&(sz[j]));
		}
		if(sz[0]==0){
			break;
        }
        sz[3]=sz[3]+12;
		sum=(sz[3]-sz[0])*3600+(sz[4]-sz[1])*60+(sz[5]-sz[2]);
		my_printf("%d\n",sum);
	}
	return 0;
}