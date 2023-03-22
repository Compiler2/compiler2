#define NUM_ITER 895319

#include <header.h>


int main_bench(){
int n,i,x,y,s=0;
char a[501],b[501];
double m,o;
my_scanf("%lf",&m);
my_scanf("\n%s",a);
my_scanf("\n%s",b);
x=strlen(a);
y=strlen(b);
if(x!=y)my_printf("error");
if(x==y){
for(i=0;i<x;i++){
	if((a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G')||(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G')){
		my_printf("error");
		return 0;
	}
}

	for(i=0;i<x;i++){
		if(a[i]==b[i])s=s+1;
}
o=1.0*s/x;
if(o>m)my_printf("yes");
else my_printf("no");
}

return 0;
}
