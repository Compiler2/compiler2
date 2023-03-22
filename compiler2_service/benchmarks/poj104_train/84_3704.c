#define NUM_ITER 60220

#include <header.h>

int main_bench(){
int a,b,c,x,y,i,n;
my_scanf("%d",&n);
for(i=1;i<=2;i++){
	if(i=1){
		my_scanf("%d",&a);
	}
	if(i=2){my_scanf("%d",&b);
	}
	if(a>b){x=a;y=b;}
	if(a<b){x=b;y=a;}
}
for(i=3;i<=n;i++){
my_scanf("%d",&c);
if(c>x){y=x;x=c;}
if(x>c&&c>y){y=c;}
}
my_printf("%d\n""%d\n",x,y);
return 0;
}