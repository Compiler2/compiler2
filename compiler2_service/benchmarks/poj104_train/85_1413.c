#define NUM_ITER 29092

#include <header.h>

int main_bench(){
	int n,i,j,l;
	my_scanf("%d",&n);
	char zfc[100][21];
	for(i=0;i<n;i++){
		my_scanf("%s",&zfc[i]);
	}
	for(i=0;i<n;i++){
		l=strlen(zfc[i]);
		for(j=0;j<l;j++){
			if(zfc[i][j]>='0'&&zfc[i][j]<='9'&&!(zfc[i][0]>='0'&&zfc[i][0]<='9')){
				continue;
			}
			else if(zfc[i][j]>='a'&&zfc[i][j]<='z'){
				continue;
			}
			else if(zfc[i][j]>='A'&&zfc[i][j]<='Z'){
				continue;
			}
			else if(zfc[i][j]=='_'){
				continue;
			}
			else{
				my_printf("no\n");
				break;
			}
		}
		if(j==l){
			my_printf("yes\n");
		}
	}
	return 0;
}