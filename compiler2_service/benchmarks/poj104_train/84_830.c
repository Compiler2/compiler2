#include <header.h>


int main_bench()
{
int n,e,i,m,t;
my_scanf("%d",&n);
int a,b,c;
my_scanf("%d %d",&a,&b);
if(a<b){
t=a;
b=a;
a=t;
}
for(i=0;i<n-2;i++){
my_scanf("%d",&c);
if(c>a){

e=b;
b=a;
a=c;
m=c;
}
else 
if(a>c&&c>b)
{
m=b;
b=c;
c=m;
}
}
my_printf("%d\n%d\n",a,b);

	return 0;
}
