#define NUM_ITER 1487339

#include <header.h>

int main_bench(){
	int n,i,j,a;
	char num[4];
	gets(num);
	n=atoi(num);
	for(i=0;i<n;i++){
		char yl[256];
		char bl[256];
		gets(yl);
		a=strlen(yl);
		for(j=0;j<a;j++){
			if(yl[j]==65){
				bl[j]='T';
			}else if(yl[j]==67){
				bl[j]='G';
			}else if(yl[j]==71){
				bl[j]='C';
			}else{
				bl[j]='A';
			}
			my_printf("%c",bl[j]);
		}
		my_printf("\n");
	}
	return 0;
}






	