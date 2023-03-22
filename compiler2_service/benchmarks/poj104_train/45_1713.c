#define NUM_ITER 442785

#include <header.h>


int main_bench(){
	char s[50];
	char w[50];
	my_scanf("%s",s);
	my_scanf("%s",w);

	int ls=strlen(s);
	int lw=strlen(w);
	int i,j;
	int t=1;
	
	
	for(i=0;i<50;i++){
	
		for(j=0;j<ls;j++){
		
			if(w[i+j]!=s[j]){
				t=0;
				break;
			}

			if(w[i+j]==s[j]){
				t=1;
				continue;
			}

		}

		if(t==1){
			my_printf("%d\n",i);
			break;
		}
	}	

	return 0;
}
