#define NUM_ITER 1099

#include <header.h>

int main_bench(){
	int n,i,len,j,k;
	char u[256]={0},t[256]={0};
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		for(k=0;k<256;k++){
		u[k]=0;
		t[k]=0;
		}
		my_scanf("%s",u);
		len=strlen(u);
		for(j=0;j<len;j++){
			if(u[j]==65) t[j]=84;
			if(u[j]==84) t[j]=65;
			if(u[j]==67) t[j]=71;
			if(u[j]==71) t[j]=67;
		}
		my_printf("%s\n",t);
	}
	return 0;
}

