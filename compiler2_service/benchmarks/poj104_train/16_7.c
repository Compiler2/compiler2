#define NUM_ITER 1246930

#include <header.h>

int main_bench()
{
	char num[6];
	int i,n,nnum[6],p=0;
	my_scanf("%s",num);
	n=strlen(num);
	
	for(i=n-1;i>=0;i--){
		nnum[i]=num[i]-48;
		my_printf("%d",nnum[i]);
	}
	
	return 0;
}

