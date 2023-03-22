#include <header.h>

int main_bench(){
	int N,i,k;
        char lian[300],fanlian[300]={0};
         my_scanf("%d",&N);
	for(i=0;i<N;i++){
my_scanf("%s",lian);
for(k=0;k<strlen(lian);k++){
if(lian[k]=='A'){fanlian[k]='T';}
if(lian[k]=='G'){fanlian[k]='C';}
if(lian[k]=='C'){fanlian[k]='G';}
if(lian[k]=='T'){fanlian[k]='A';}
my_printf("%c",fanlian[k]);
} 
my_printf("\n");
}
	return 0;
}