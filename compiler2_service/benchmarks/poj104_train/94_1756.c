#define NUM_ITER 9422

#include <header.h>

int main_bench(){
	int an[500];
	int n,i,max=1,point=1;
	char x;
	x=',';
	my_scanf("%d",&n);
	for(i=0;i<n;i++)
		my_scanf("%d",&an[i]);
	for(i=0;i<n;i++){
		if(an[i]>max&&an[i]%2==1)
			max=an[i];
	}
	while(point<=max-2){
		for(i=0;i<n;i++){
			if(an[i]==point){
				my_printf("%d%c",an[i],x);
				break;
			}
		}
		point+=2;
	}
	for(i=0;i<n;i++){
		if(an[i]==point){
			my_printf("%d",an[i]);
			break;
		}
	}
	return 0;
}
