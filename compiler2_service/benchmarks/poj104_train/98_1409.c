#define NUM_ITER 28759

#include <header.h>

int main_bench()
{
	int n,i,m=0,t=0;
	char word[100];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s",word);
		t+=strlen(word);
		m++;
		if(m==1){
			my_printf("%s",word);
		}else{
			if((t+m-1)<=80){
				my_printf(" ");
				my_printf("%s",word);
			}else{
				my_printf("\n");
				my_printf("%s",word);
				m=1;
				t=strlen(word);
			}
		}
	}
	return 0;
}