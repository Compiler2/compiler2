#include <header.h>

int main_bench(){
	char zfc[256],*ps;
	int n,i;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		char e[256]={0};
	    my_scanf("%s",zfc);
		for(ps=zfc;*ps!='\0';ps++){
			if(*ps=='A'){
				strcat(e,"T");
			}else if(*ps=='T'){
				strcat(e,"A");
			}else if(*ps=='G'){
                strcat(e,"C");
			}else{
				strcat(e,"G");
			}
		}
	
		my_printf("%s\n",e);
	}
return 0;
}