#define NUM_ITER 26881

#include <header.h>

int main_bench(){
	char k[1000];
    int i,n,j;
	my_scanf("%d",&n);
	for(i=0;i<=n;i++){
		gets(k);
        for(j=0;k[j]!='\0';j++){
			if(k[j]=='A') my_printf("T");
			else if(k[j]=='T') my_printf("A");
			else if(k[j]=='C') my_printf("G");
			else if(k[j]=='G') my_printf("C");
		}
		if(k[j]=='\0') my_printf("\n");
	}
    return 0;

}
