#define NUM_ITER 25504

#include <header.h>

void match(char a);
int main_bench()
{
	int n,i,j,len;
	char c[256];
	my_scanf("%d",&n);
	for(i=0;i<n;i++){
	my_scanf("%s",&c);
	len=strlen(c);
	for(j=0;j<len;j++){
	match(c[j]);
	}
	my_printf("\n");
	}
	return 0;
}
void match(char a){
	if(a=='A')
		my_printf("T");
	if(a=='T')
		my_printf("A");
	if(a=='C')
		my_printf("G");
	if(a=='G')
		my_printf("C");
}
