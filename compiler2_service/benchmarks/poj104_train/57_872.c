#define NUM_ITER 30268

#include <header.h>

int main_bench(){
	int n;
	my_scanf("%d",&n);
	int i,k,b;
	for(i=0;i<n;i++){
		char shuzu[40];
		my_scanf("%s",shuzu);
		b=strlen(shuzu);
		for(k=0;k<b;k++){
			if((shuzu[k]=='e'&&shuzu[k+1]=='r'&&shuzu[k+2]=='\0')||(shuzu[k]=='l'&&shuzu[k+1]=='y'&&shuzu[k+2]=='\0')||(shuzu[k]=='i'&&shuzu[k+1]=='n'&&shuzu[k+2]=='g'&&shuzu[k+3]=='\0')){
				shuzu[k]='\0';
			}
		}
		my_printf("%s\n",shuzu);
	}
	
	return 0;
}