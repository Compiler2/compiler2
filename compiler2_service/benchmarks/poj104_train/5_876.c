#include <header.h>

int main_bench() {
	int b,c,d,i;
	double a,e,f;
	char n[501],m[501];
	my_scanf("%lf",&a);
	my_scanf("%s",n);
	my_scanf("%s",m);
	b=strlen(n);
	c=strlen(m);
	d=0;
	if(b!=c){
	 d++;
	}
	for(i=0;i<b;i++){
		if((n[i]!='A')&&(n[i]!='T')&&(n[i]!='C')&&(n[i]!='G')||(m[i]!='A')&&(m[i]!='T')&&(m[i]!='C')&&(m[i]!='G')){
			d++;
		}
	}
		if(d!=0){
			my_printf("error");
		}else{
			e=0;
		for(i=0;i<b;i++){
			if(n[i]==m[i]){
				e++;
			}
		 }
		 	f=e/b;
			 if(f>a){
			 	my_printf("yes");
			 }else{
			 	my_printf("no");
			 }
		}
  return 0;
}