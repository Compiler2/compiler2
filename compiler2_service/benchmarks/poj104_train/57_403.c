#define NUM_ITER 23949

#include <header.h>

int main_bench(){
	int i,k,n;
	int shu[100]={0};
	char zi[100][100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s",zi[i]);
		shu[i]=strlen(zi[i]);
	}
	for(i=0;i<n;i++){
		if((zi[i][shu[i-1]=='r'])&&(zi[i][shu[i]-2]=='e')){
			shu[i]=shu[i]-2;
		}
		else if((zi[i][shu[i-1]=='y'])&&(zi[i][shu[i]-2]=='l')){
			shu[i]=shu[i]-2;
		}
		else if((zi[i][shu[i]-1]=='g')&&(zi[i][shu[i]-2]=='n')&&(zi[i][shu[i]-3]=='i')){
			shu[i]=shu[i]-3;
		}
	}
	for(i=0;i<n;i++){
		for(k=0;k<shu[i];k++){
			my_printf("%c",zi[i][k]);
		}
		my_printf("\n");
	}
	return 0;
}