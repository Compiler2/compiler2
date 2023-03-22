#define NUM_ITER 7400

#include <header.h>

int main_bench(){
	int n,i,j,sum;
	char word[40];
	my_scanf("%d\n",&n);
	my_scanf("%s",word);
	my_printf("%s",word);
	sum=strlen(word);
	for(i=1;i<n;i++){
		for(j=0;j<40;j++){
			word[j]='\0';
		}
        my_scanf("%s",word);
		if(sum+strlen(word)+1<=80){
			my_printf(" %s",word);
			sum=sum+strlen(word)+1;
		}else{
			my_printf("\n%s",word);
			sum=strlen(word);
		}
	}
	return 0;
}