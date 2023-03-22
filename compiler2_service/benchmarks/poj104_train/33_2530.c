#include <header.h>

int main_bench(){
	int n;
	my_scanf("%d",&n);
	char suoyou[1000][256];
	int i=0;
	for(i=0;i<n+1;i++){
		gets(suoyou[i]);
	}
	int k=0;
	for(i=0;i<n+1;i++){
		for(k=0;k<strlen(suoyou[i]);k++){
			if(suoyou[i][k]==65){
				suoyou[i][k]=84;
			}else if(suoyou[i][k]==84){
				suoyou[i][k]=65;
			}else if(suoyou[i][k]==67){
				suoyou[i][k]=71;
			}else{
				suoyou[i][k]=67;
			}
		}
	}
	for(i=0;i<n+1;i++){
		my_printf("%s\n",suoyou[i]);
	}
	return 0;
}