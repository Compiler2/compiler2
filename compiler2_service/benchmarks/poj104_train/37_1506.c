#define NUM_ITER 21218

#include <header.h>

int main_bench(){
	int i,n,j,k,x=0;
	char s[100001];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s",s);

		for(j=0;j<strlen(s);j++,x=0){
			for(k=0;k<strlen(s);k++){
				if(s[k]==s[j]&&k!=j){
					
					x++;
					
					
				}
				

			}

			if(x==0){
				my_printf("%c\n",s[j]);
				break;
			}
		
		}

		if(j==strlen(s))
			my_printf("no\n");



	}

	return 0;
}