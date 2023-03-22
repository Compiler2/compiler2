#define NUM_ITER 1069000

#include <header.h>

int main_bench(){
	char a[50],b[50];
	int  i,j,s,w;
	my_scanf("%s",a);
	s=strlen(a);
	my_scanf("%s",b);
	w=strlen(b);
	for(j=0;j<w;j++){
		if(b[j]==a[0]){
			for(i=1;i<s;i++){
				if(b[j+i]!=a[i]) break;
			}
			if(i==s) {
				my_printf("%d",j);
				break;
			}
		}
	}
	return 0;
}