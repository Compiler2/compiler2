#define NUM_ITER 29078

#include <header.h>

int main_bench(){
	int n;
	my_scanf("%d",&n);
	for(int i=0;i<n;i++){
		char str[256],*ps;
		my_scanf("%s",str);
		for(ps=str;*ps!='\0';ps++){
			if(*ps=='A'){
			    *ps=*ps-'A'+'T';
			}else if(*ps=='T'){ 
				*ps=*ps-'T'+'A';
			}else if(*ps=='C'){
				*ps=*ps-'C'+'G';
			}else if(*ps=='G'){
				*ps=*ps-'G'+'C';
			}
		}
	    my_printf("%s\n",str);
	}
	return 0;
}