#define NUM_ITER 28026

#include <header.h>


int main_bench()
{
	int n,i;
	char zfc[1000][256],*a;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
		my_scanf("%s",zfc[i]);
	
		for(a=zfc[i];*a!='\0';a++){
			if(*a=='A'){
			 *a='T';	
			}else if(*a=='T'){
               	            *a='A';
			}else if(*a=='C'){
               	 *a='G';
			}else if(*a=='G'){
               	 *a='C';
			}

		}
my_printf("%s\n",zfc[i]);		
		
		
	}
	return 0;
}

