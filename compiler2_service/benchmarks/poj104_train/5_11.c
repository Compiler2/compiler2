#define NUM_ITER 913081

#include <header.h>

int main_bench(){
	char a[501],b[501];
	int l1,l2,n,i,j,k,num=0,f=0;
	double s,p;
	my_scanf("%lf",&s);
	my_scanf("%s",a);
	my_scanf("%s",b);
	l1=strlen(a);
	l2=strlen(b);
	if(l1!=l2){
	my_printf("error");
	f=1;
	return 0;}
	else{
		for(i=0;i<l1;i++){
			if(a[i]!='A'&&a[i]!='T'&&a[i]!='G'&&a[i]!='C'){
	my_printf("error");
	f=1;
		return 0;}}
	for(i=0;i<l2;i++){
			if(b[i]!='A'&&b[i]!='T'&&b[i]!='G'&&b[i]!='C'){
	my_printf("error");
	f=1;
	return 0;}}
	if(f==0){	for(i=0;i<l1;i++){
	if(a[i]==b[i]) num++;}
	}
	if(f==0) { 
	p=(double)num/l1;
	if(p>s) my_printf("yes");
	else my_printf("no");}}
	



	return 0;
}

	