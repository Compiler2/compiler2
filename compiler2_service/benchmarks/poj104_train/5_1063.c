#define NUM_ITER 858318

#include <header.h>

int main_bench(){
char a[501], b[501];
double n,y,x,m,q,p;
x=0;
p=1;
my_scanf("%lf",&n);
my_scanf("%s",a);
my_scanf("%s",b);
m=strlen(a);
q=strlen(b);
for(int i=0;i<m;i++){if(a[i]!='A'&&a[i]!='C'&&a[i]!='G'&&a[i]!='T'){p=0;break;}}
for(int i=0;i<q;i++){if(b[i]!='A'&&b[i]!='C'&&b[i]!='G'&&b[i]!='T'){p=0;break;}}
if(m!=q){p=0;}
if(p==0){my_printf("error");}
else {
	for (int i=0;i<m;i++){
		if (a[i]==b[i]){x++;}
}y=x/m;
	if(y>n){my_printf("yes");}
	else{my_printf("no");}}
return 0;
}


