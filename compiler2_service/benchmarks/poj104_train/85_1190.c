#define NUM_ITER 34409

#include <header.h>

int main_bench(){
	int i,j,n;
	char s[2000];
	int r=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		r=0;
		my_scanf("%s",s);
		if((s[0]>='A'&&s[0]<='Z')||(s[0]>='a'&&s[0]<='z')||(s[0]=='_')){
			for(j=0;s[j]!='\0';j++){
				if((s[j]>='0'&&s[j]<='9')||(s[j]>='A'&&s[j]<='Z')||(s[j]>='a'&&s[j]<='z')||s[j]=='_'){
					r=0;
				}else{
					r=1;
				}
				if(r==1){
					break;
				}
			}
		}else{
			r=1;
		}
		if(r==0){
			my_printf("yes\n");
		}else{
			my_printf("no\n");
		}
	}
	return 0;
}

