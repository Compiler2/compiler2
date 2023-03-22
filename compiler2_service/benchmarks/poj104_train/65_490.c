#include <header.h>

int main_bench(){
int n,a,b,c=0,d=0;
my_scanf("%d",&n);
while(n--){
my_scanf("%d %d",&a,&b);
if((a==0&&b==1)||(a==1&&b==2)||(a==2&&b==0)){c++;}
if(a==b){c++;
d++;}
if((b==0&&a==1)||(b==1&&a==2)||(b==2&&a==0)){d++;}
}
if(c>d)my_printf("A");
if(c<d)my_printf("B");
if(c==d)my_printf("Tie");
	return 0;
}
