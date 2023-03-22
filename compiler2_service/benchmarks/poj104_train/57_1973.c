#define NUM_ITER 31406

#include <header.h>

int main_bench()
{
	int n,i,tmp,j;
	char word[100];
    my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s",word);
		tmp=strlen(word);
        if(word[tmp-2]=='e'||word[tmp-2]=='l'){
		for(j=0;j<tmp-3;j++){
			my_printf("%c",word[j]);
		}
		my_printf("%c\n",word[tmp-3]);
		}
		else{
			for(j=0;j<tmp-4;j++){
			my_printf("%c",word[j]);
		}
		my_printf("%c\n",word[tmp-4]);
		}
	}
    return 0;
}

