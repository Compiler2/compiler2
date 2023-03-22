#include <header.h>


int main_bench(){
	int n,i,len=0;
	my_scanf("%d",&n);
	char word[1000][40];
	for(i=0;i<n;i++){
		my_scanf("%s",word[i]);
	}
	for(i=0;i<n;i++){
		len+=strlen(word[i]);
		if(len<=80){
			my_printf("%s",word[i]);
			len++;
			if(i!=n-1&&len+strlen(word[i+1])<=80){
				my_printf(" ");
			}
		}else{
			my_printf("\n%s ",word[i]);
			len=strlen(word[i])+1;
		}
	}
	return 0;
}
