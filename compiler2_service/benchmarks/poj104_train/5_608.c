#define NUM_ITER 786887

#include <header.h>

int main_bench(){
	float n,f;
	int l,c,o=0,k=0,v=0;
	char a[501]={0},b[501]={0};
	my_scanf("%f\n",&n);
	my_scanf("%s",a);
	my_scanf("%s",b);
    l=strlen(a);
	c=strlen(b);
    for(int q=0;q<l;q++){
		if(a[q]<'A'||a[q]>'Z'){
			o=1;
	break;}}
    for(int p=0;p<l;p++){
		if(b[p]<'A'||b[p]>'Z'){
			k=1;
	break;}}
		if(o==1||k==1||l!=c){
			my_printf("error");}else{
				for(int g=0;g<c;g++){
					if(a[g]==b[g]){
						v++;}
				}
		f=(float)v/(float)c;
	
		if(f>n){
			my_printf("yes");}
		else{my_printf("no");}
			}
	return 0;}