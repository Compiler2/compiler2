#define NUM_ITER 1071762

#include <header.h>



int main_bench()
{
	char child[50],mother[50];
	my_scanf("%s",child);
	getchar();
	my_scanf("%s",mother);
	int l=strlen(child),ml=strlen(mother),isbreak,i,k;
	for(i=0;i+l<=ml;i++){
		isbreak=1;
		for(k=0;k<l;k++){
			if(child[k]!=mother[k+i]){
				isbreak=0;
				break;
			}
		}
		if(isbreak){
			my_printf("%d",i);
			return 0;
		}
	}
}