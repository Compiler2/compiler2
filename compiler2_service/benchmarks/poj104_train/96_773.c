#define NUM_ITER 781313

#include <header.h>

int main_bench()
{	char c[200];
	int zs[200],shang[200];
	int i,j,yu=0,flag=0;
	gets(c);
	for(i=strlen(c)-1;i>=0;i--){
		zs[i]=c[i]-'0';
	}
	for(i=0;i<strlen(c);i++){
		shang[i]=(yu*10+zs[i])/13;
		yu=(yu*10+zs[i])%13;
	}
	for(i=0;i<strlen(c);i++){
		if(flag){
			my_printf("%d",shang[i]);
		}
		if(1-flag){
			if(shang[i]!=0){
				my_printf("%d",shang[i]);
				flag=1;
			}
		}
	}
         if(flag==0){
		my_printf("0");
	}
	my_printf("\n");
	my_printf("%d",yu);
	return 0;
}