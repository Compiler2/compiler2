#define NUM_ITER 35248

#include <header.h>

int main_bench(){
	char zf[21];
	int n,judge=0;
	my_scanf("%d",&n);
	for(int j=0;j<n;j++){
		my_scanf("%s",zf);
		for(int i=0;zf[i];i++){
			if(!((zf[i]>='0'&&zf[i]<='9'&&i>0)||(zf[i]>='a'&&zf[i]<='z')||(zf[i]>='A'&&zf[i]<='Z')||(zf[i]=='_'))){
			judge=1;
			break;
			}
		}
		if(judge==0){
			my_printf("yes\n");
		}
		if(judge==1){
			my_printf("no\n");
		}
		judge=0;
	}
	return 0;
}