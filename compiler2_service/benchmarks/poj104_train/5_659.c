#define NUM_ITER 936560

#include <header.h>

int main_bench(){
int i,a,b,c=0;
double e,d;
char x[256],y[256];
my_scanf("%lf",&d);
my_scanf("%s",x);
my_scanf("%s",y);
a=strlen(x);
b=strlen(y);
if(a!=b){
	my_printf("error");}
else if(a==b){
	for(i=0;i<a;i++){
		if((x[i]!='A'&&x[i]!='T'&&x[i]!='C'&&x[i]!='G')||(y[i]!='A'&&y[i]!='T'&&y[i]!='C'&&y[i]!='G')){
		my_printf("error");
		return 0;}else{
			if(x[i]==y[i]){
				c+=1;}
}
	}
	e=1.0*c/a;
	if(e>=d){my_printf("yes");}else{my_printf("no");}}


return 0;
}
