#define NUM_ITER 1318391

#include <header.h>

int main_bench(){
	char zfc[1500];
	int n;
	int kongge[600];
	int i;
	int j=1;
	int k;
	gets (zfc);
	n=strlen(zfc);
	kongge[0]=-1;
	for(i=0;i<n;i++){
		if(zfc[i]==' '){
			kongge[j]=i;
			j++;
		}
	}
	k=j;
	j=0;
	kongge[k]=n;
	if(j==0){
		my_printf("%d",kongge[j+1]-kongge[j]-1);
		j++;
	}
	for(j=1;j<k;j++){
		if((kongge[j+1]-kongge[j]-1)!=0){
			my_printf(",%d",kongge[j+1]-kongge[j]-1);
		}
	}
	return 0;
}