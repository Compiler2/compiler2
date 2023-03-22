#define NUM_ITER 33832

#include <header.h>


char s[1000];
int main_bench(){
	int T,i;
	my_scanf("%d",&T);
	while (T--){
		my_scanf("%s",s);
		if (isalpha(s[0])||s[0]=='_'){
			for (i=1;s[i];i++){
				if (!isalpha(s[i])&&!isdigit(s[i])&&s[i]!='_'){
					break;
				}
			}
			if (s[i]){
				puts("no");
			}else puts("yes");
		}else 
			puts("no");
	}
}