#include <header.h>

int test(int *,int *,int);
int main_bench(){
	int n,integer[300],aux,*curp,i;
	my_scanf("%d%d",&n,integer);
	n--;
	for(curp=integer;n>0;n--){
		my_scanf("%d",&aux);
		if(test(integer,curp,aux)){
			curp++;
			*curp=aux;}}
	for(i=0;integer+i<curp;i++)
		my_printf("%d,",*(integer+i));
	my_printf("%d\n",*curp);
	return 0;}
int test(int *p1,int *p2,int aux){
	for(;p2>=p1;p2--){
		if(*p2==aux)	return 0;}
	return 1;}