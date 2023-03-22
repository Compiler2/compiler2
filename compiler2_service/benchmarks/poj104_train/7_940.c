#define NUM_ITER 985992

#include <header.h>


int main_bench(){
    char zfc[256],wt[256],tar[256];
	int i,j,tag;
	my_scanf("%s",zfc);
	my_scanf("%s",wt);
	my_scanf("%s",tar);
	int n=strlen(zfc);
	int k=strlen(wt);
	for(i=0;i<n-k+1;i++){
		tag=0;
		for(j=i;j<i+k;j++){
			if(zfc[j]!=wt[j-i]){
				tag=1;
				break;
			}
		}
		if(tag==0){
			for(j=i;j<i+k;j++){
				zfc[j]=tar[j-i];
			}
			break;
		}
	}
	puts(zfc);

	return 0;
}


