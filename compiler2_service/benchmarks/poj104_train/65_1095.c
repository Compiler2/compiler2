#define NUM_ITER 36746

#include <header.h>

int main_bench(){
	int a,b,c=0,d=0,n,i;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d %d",&a,&b);
if((a-b)==0) continue;
else if((a-b)==-1)
c++;
else if((a-b)==2)
c++;
else d++;
	}
	if(c>d) my_printf("A");
	else if(c==d) my_printf("Tie");
	else my_printf("B");
	return 0;
}
	
