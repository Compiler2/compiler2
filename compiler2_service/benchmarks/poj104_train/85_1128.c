#define NUM_ITER 22362

#include <header.h>

int biao(char a){
	if((a>='a'&&a<='z')||(a>='A'&&a<='Z')||(a>='0'&&a<='9')||a=='_'){
		return 1;
	}else{
		return 0;
	}
}
int main_bench(){
	int n;
	char zfc[100][21];
	my_scanf("%d",&n);
	int i;
	for(i=0;i<n;i++){
		my_scanf("%s",zfc[i]);
	}
	int L;
	int k,l=0;
	for(i=0;i<n;i++){
		L=strlen(zfc[i]);
		for(k=0;k<L;k++){
			if(biao(zfc[i][k])){
				l++;
			}
		}
		if((zfc[i][0]<'0'||zfc[i][0]>'9')&&l==L){
			my_printf("yes\n");
		}else{
			my_printf("no\n");
		}
		l=0;
	}
	return 0;
}
