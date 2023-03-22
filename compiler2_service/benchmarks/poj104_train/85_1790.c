#define NUM_ITER 27882

#include <header.h>

int main_bench(){
	int n,k,i,j;
	my_scanf("%d",&n);
	char zfc[100][21];
	for(i=0;i<n;i++){
		my_scanf("%s",zfc[i]);
	}
	for(i=0;i<n;i++){
		
		k=strlen(zfc[i]);
		for(j=0;j<k;j++){
			if(zfc[i][0]>='0'&&zfc[i][0]<='9'){
				my_printf("no\n");
				break;
				
			
			}
			 if(zfc[i][j]>='a'&&zfc[i][j]<='z'||zfc[i][j]>='A'&&zfc[i][j]<='Z'||zfc[i][j]=='_'||zfc[i][j]>='0'&&zfc[i][j]<='9'){
				continue;

			}else{
				my_printf("no\n");
				break;
			}
			
			
			}
	
	if(j==k){
		my_printf("yes\n");
	}
	}
	return 0;
}

