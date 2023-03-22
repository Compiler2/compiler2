#define NUM_ITER 33012

#include <header.h>

int main_bench(){
	int i,j,n,t=0;
	char s[21];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s",s);
		for(j=0;s[j];j++){
			if(!((s[j]=='_')||(s[j]>='A'&&s[j]<='Z')||(s[j]>='a'&&s[j]<='z')||(s[j]>='0'&&s[j]<='9'&&j>0))){
				t+=1;
			}
		}
		if(t==0){
			my_printf("yes\n");
		}else{
			my_printf("no\n");
		}
		t=0;
	}
	return 0;
}