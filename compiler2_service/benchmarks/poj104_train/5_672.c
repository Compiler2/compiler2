#define NUM_ITER 936941

#include <header.h>


int main_bench(){
	int i,c,d,j=1;
	double n,m,q=0;
    char a[501],b[501];
	my_scanf("%lf",&n);
	my_scanf("%s",a);
    my_scanf("%s",b);
	c=strlen(a);
	d=strlen(b);
	
	for(i=0;a[i];i++){
		if((a[i]!='T'&&a[i]!='A'&&a[i]!='G'&&a[i]!='C')||(b[i]!='A'&&b[i]!='G'&&b[i]!='T'&&b[i]!='C')||c!=d){
            my_printf("error");
			j=0;
		break;}}
	if(j==1){
	for(i=0;a[i];i++){
		if(a[i]==b[i]){
			m++;}}
	q=m/c;
	if(q>n){
		my_printf("yes");}
	else{
		my_printf("no");}}

			
return 0;
}