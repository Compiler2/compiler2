#define NUM_ITER 1086166

#include <header.h>

int main_bench(){
	int n,i,k;
	char s1[200],s2[200];
	my_scanf("%s",s1);
	my_scanf("%s",s2);
	if(strlen(s1)!=strlen(s2)){
		my_printf("NO");
		return 0;
	}
	for(i=0;s1[i];i++){
		n=0;
		for(k=0;s2[k];k++){
			if(s2[k]==s1[i]){
				s2[k]=' ';
				n=1;
				break;
			}
		}
		if(n==0){
			my_printf("NO");
			return 0;
		}
	}
	my_printf("YES");
	
	return 0;
}