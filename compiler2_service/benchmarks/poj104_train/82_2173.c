#define NUM_ITER 37470

#include <header.h>


int main_bench(){
	int n,gao[100],di[100],xiaoshi=0,max=0,i;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%d%d",&gao[i],&di[i]);
	}
	for(i=0;i<n;i++){
		if(gao[i]>=90&&gao[i]<=140&&di[i]>=60&&di[i]<=90){
			xiaoshi++;
			if(gao[i+1]>=90&&gao[i+1]<=140&&di[i+1]>=60&&di[i+1]<=90){
				continue;
			}else{
				if(xiaoshi>max){
					max=xiaoshi;
				}
				xiaoshi=0;
			}
		}
	}
	my_printf("%d",max);
	return 0;
}