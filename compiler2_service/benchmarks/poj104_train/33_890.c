#define NUM_ITER 28706

#include <header.h>

int main_bench(){
	char str[1000][256];
	int i,p=0,n,j;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s",str[i]);
		for(j=0;str[i][j]!='\0';j++){
			switch(str[i][j]){
			case('A'):str[i][j]='T';
			break;
			case('T'):str[i][j]='A';
			break;
			case('G'):str[i][j]='C';
			break;
			case('C'):str[i][j]='G';
			break;
			}
		}
	}
	for(i=0;i<n;i++){
		my_printf("%s\n",str[i]);
	}
	return 0;
}
