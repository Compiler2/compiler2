#define NUM_ITER 57445

#include <header.h>

int main_bench(){
	int n,i,c[100],a=0,b=0,m=0,d=0;
	my_scanf("%d",&n);
	for(i=0;i<n;i++){my_scanf("%d",&c[i]);
	   if(c[i]<19) a+=1;
	   else if(c[i]<36) b+=1;
	   else if(c[i]<61) m+=1;
	   else d+=1;}
	my_printf("1-18: %.2lf",(double)a/n*100);
	my_printf("%%\n");
my_printf("19-35: %.2lf",(double)b/n*100);
	my_printf("%%\n");
my_printf("36-60: %.2lf",(double)m/n*100);
	my_printf("%%\n");
my_printf("60??: %.2lf",(double)d/n*100);
	my_printf("%%\n");
	
}