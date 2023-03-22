#define NUM_ITER 911751

#include <header.h>

int main_bench(){
	char a[501],b[501];
	int i,x,y,z,c;
	double n,p;
	my_scanf("%lf",&n);
	my_scanf("%s",&a);
	my_scanf("%s",&b);
	x=strlen(a);
	y=strlen(b);
	z=0;
	c=0;
	if(x!=y){
		my_printf("error");
	}else{
		for(i=0;i<x;i++){
			if((a[i]=='A'||a[i]=='T'||a[i]=='G'||a[i]=='C')&&(b[i]=='A'||b[i]=='T'||b[i]=='G'||b[i]=='C')){
				c++;
				if(a[i]==b[i]){
				z++;
				}
			}
		}
		p=1.000*z/x;
		if(c==x&&p>n){
			my_printf("yes");
		}else if(c==x&&p<=n){
			my_printf("no");
		}else if(c!=x){
			my_printf("error");
		}
	}
	return 0;
}
	