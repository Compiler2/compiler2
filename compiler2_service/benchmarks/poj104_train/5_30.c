#define NUM_ITER 980351

#include <header.h>

int main_bench(){
	int i,x=0;
	double n;
	char su[500],zu[500];
	my_scanf("%lf %s %s",&n,su,zu);
if(strlen(su)!=strlen(zu))
{my_printf("error");return 0;}
for(i=0;i<strlen(su);i++){
if((su[i]!='A' && su[i]!='T' && su[i]!='G' && su[i]!='C') || (zu[i]!='A' && zu[i]!='T' && zu[i]!='G' && zu[i]!='C'))
{my_printf("error");return 0;}
if(su[i]==zu[i])
x++;
}
if(x/(1.0*strlen(su))>n)
{my_printf("yes");return 0;}
my_printf("no");
	return 0;
}