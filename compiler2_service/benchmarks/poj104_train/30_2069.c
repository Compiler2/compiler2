#define NUM_ITER 80747

#include <header.h>

int main_bench(){
	int n;
	int result=0;
	my_scanf("%d",&n);
    int i=1;
	for(i=1;i<=n;i++){
		if((int)i%7==0||(int)i/10==7||(int)i%10==7){
			continue;}

		result+=i*i;}
	    my_printf("%d",result);
		return 0;
}
