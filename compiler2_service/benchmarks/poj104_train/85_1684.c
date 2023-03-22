#define NUM_ITER 28713

#include <header.h>


int main_bench(){
	char zfc[100][21];
	int n,i,k,jieguo[100]={0};
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("\n%s",&zfc[i]);
	}
	for(i=0;i<n;i++){
		if((zfc[i][0]>='a'&&zfc[i][0]<='z')||(zfc[i][0]>='A'&&zfc[i][0]<='Z')||zfc[i][0]=='_'){
			for(k=0;zfc[i][k]!='\0';k++){
				if((zfc[i][k]>='a'&&zfc[i][k]<='z')||(zfc[i][k]>='A'&&zfc[i][k]<='Z')||(zfc[i][k]>='0'&&zfc[i][k]<='9')||zfc[i][k]=='_'){
					continue;
				}else{
					jieguo[i]=99;
				}
			}
		}else{
			jieguo[i]=99;
		}
	}
	for(i=0;i<n;i++){
		if(jieguo[i]==99){
			my_printf("no\n");
		}else{
			my_printf("yes\n");
		}
	}
	return 0;
}