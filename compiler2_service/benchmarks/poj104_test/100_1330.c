#define NUM_ITER 409029

#include <header.h>


int main_bench(){
	char s[300],i;
	int k=0,j,num;
	my_scanf("%s",s);
	for(i='a';i<='z';i++){
		num=0;
		for(j=0;s[j]!='\0';j++){
			if(s[j]==i){
				num++;}
		}
		if(num!=0){
			my_printf("%c=%d\n",i,num);
			k++;
		}
	}
	if(k==0) my_printf("No");
}
