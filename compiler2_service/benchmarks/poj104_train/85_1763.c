#define NUM_ITER 29095

#include <header.h>

int main_bench(){
	int n,i,j,m=0;
	char s[100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
m=0;
		my_scanf("%s",s);
		for(j=0;s[j];j++){
			if(j==0){
				if(!(s[j]=='_'||(s[j]>='a'&&s[j]<='z')||(s[j]>='A'&&s[j]<='Z'))){
					m++;
				}
			}else{
				if(!(s[j]=='_'||(s[j]>='a'&&s[j]<='z')||(s[j]>='A'&&s[j]<='Z')||(s[j]>='0'&&s[j]<='9'))){
					m++;
				}
			}
		}
		if(m==0){
			my_printf("yes\n");
		}else{
			my_printf("no\n");
		}
	}
	return 0;
}