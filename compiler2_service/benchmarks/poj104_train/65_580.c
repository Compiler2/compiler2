#define NUM_ITER 33265

#include <header.h>

int main_bench(){
	int n,i,j,a,b,s;
	s=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d %d",&a,&b);
		if(a-b==-1||a-b==2)s++;
		if(a-b==1||a-b==-2)s--;
	}
	if(s>0)my_printf("A");
	if(s<0)my_printf("B");
	if(s==0)my_printf("Tie");


	return 0;
}

