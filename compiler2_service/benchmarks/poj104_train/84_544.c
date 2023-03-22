#define NUM_ITER 66408

#include <header.h>

int main_bench()
{
int a,b,c,d,e,n;
my_scanf("%d\n%d\n%d\n",&n,&a,&b);
if(a<b) {
c=a;
a=b;
b=c;

}
n=n-2;
for(e=1;e<=n;e++)
{
my_scanf("%d",&d);
if(a<d) {
	b=a;
  a=d;

}
else if(b<d) b=d;

}
my_printf("%d\n%d",a,b);


}