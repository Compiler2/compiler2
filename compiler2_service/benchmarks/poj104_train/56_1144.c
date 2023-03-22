#define NUM_ITER 1546750

#include <header.h>


int main_bench()

{
	char a[6],b[6];
	int i,j;
	my_scanf("%s",a);
	for(i=0;*(a+i)!='\0';i++){
		*(b+i)=*(a+i);
	}
	for(j=i-1;j>=0;j--){
		my_printf("%c",b[j]);
	}
	
	return 0;
}