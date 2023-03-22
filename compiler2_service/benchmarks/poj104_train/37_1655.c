#include <header.h>

int main_bench(){
	char zfc[100001];
	int t,i,k,x;
	my_scanf("%d",&t);
	for(i=0;i<t;i++){
		my_scanf("%s",zfc);
		for(k=0;k<strlen(zfc)-1;k++){
			for(x=0;x<strlen(zfc);x++){
				if(x!=k&&zfc[x]==zfc[k]){
					break;
				}
			}
			if(x==strlen(zfc)){
				my_printf("%c\n",zfc[k]);
				break;
			}
		}
		if(k==strlen(zfc)-1){
			for(x=0;x<strlen(zfc);x++){
				if(x!=k&&zfc[x]==zfc[k]){
					break;
				}
			}
			if(x==strlen(zfc)){
				my_printf("%c\n",zfc[k]);
				break;
			}else{
				my_printf("no\n");
			}
		}
	}
	return 0;
}