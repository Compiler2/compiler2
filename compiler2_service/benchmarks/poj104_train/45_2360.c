#define NUM_ITER 785883

#include <header.h>

int main_bench()
{
	int i,k;
	char s[51];
	char w[51];
	my_scanf("%s%s",s,w);
	char oow[51][51]={'\0'};
	int lens,lenw;
	lens=strlen(s);
	lenw=strlen(w);
	for(i=0;i<=lenw-lens;i++){
		for(k=i;k<=i+lens-1;k++){
			oow[i][k-i]=w[k];
		}
	}
	for(i=0;i<=lenw-lens;i++){
		if(strcmp(s,oow[i])==0){
			my_printf("%d\n",i);
			break;
		}
	}
	return 0;
}