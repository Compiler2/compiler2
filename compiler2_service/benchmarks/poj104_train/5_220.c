#define NUM_ITER 845263

#include <header.h>

int main_bench(){
int i,m,d,e,f,r;
double a,g;
r=0;
my_scanf("%lf",&a);
char b[501],c[501];
for(i=0;i<2;i++){
	if(i==0){
		my_scanf("%s",b);
        m=strlen(b);
	}else{
		my_scanf("%s",c);
		d=strlen(c);
	}
}
if(m>=d){
	f=m;
}else{
	f=d;
}
e=0;
 for(i=0;i<f;i++){
		if((b[i]=='A'||(b[i]=='T')||b[i]=='C'||b[i]=='G')&&(c[i]=='A'||(c[i]=='T')||c[i]=='C'||c[i]=='G')){
			if(c[i]==b[i]){
					e++;
				}
		}else{
	        r=1;
			break;
		}
		
 }
 if((m==d)&&(r==0)){
   g=1.0*e/m;
     if(g>a){
			my_printf("yes");
	 }else{
			my_printf("no");
	 }
 }else{
	my_printf("error");
 }


return 0;

}
