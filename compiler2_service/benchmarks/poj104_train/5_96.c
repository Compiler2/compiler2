#define NUM_ITER 788353

#include <header.h>

int main_bench()
{
	double a;
	char zfc[1000];
	char zfc1[1000];
	my_scanf("%lf",&a);
	int b=0;
	double c;
	int d=0;
	int i,j;
	my_scanf("%s",zfc);
	my_scanf("%s",zfc1);
	int e=0,f=0;
	int g=0,h=0;
	int z=0;
	for(i=0;i<strlen(zfc);i++){
		if(zfc[i]=='A'||zfc[i]=='T'||zfc[i]=='C'||zfc[i]=='G'){
			g++;
		}
	}
	for(i=0;i<strlen(zfc1);i++){
		if(zfc1[i]=='A'||zfc1[i]=='T'||zfc1[i]=='C'||zfc1[i]=='G'){
		h++;
		}
	}
	if((g!=strlen(zfc))||(h!=strlen(zfc1))||strlen(zfc)!=strlen(zfc1)){
		my_printf("error\n");
		z=1;
	}
	if(z!=1){
	for(j=0;j<strlen(zfc);j++){
		if(zfc[j]==zfc1[j]){
			b++;
		}
	}
	for(j=0;j<strlen(zfc);j++){
		d++;
	}
	c=1.0*b/d;
	
	if(c>a){
		my_printf("yes\n");
	}
	if(c<=a){
		my_printf("no\n");
	}
	}
	return 0;
}
