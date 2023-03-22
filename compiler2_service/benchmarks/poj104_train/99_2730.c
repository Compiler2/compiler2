#include <header.h>

int main_bench() {
int i,n,x;
double a,b,c,d,e,f,g,h;
my_scanf("%d",&n);
for (i=1;i<=n;i++) {
my_scanf("%d",&x);
if (x<19) a++;
else if (x<36) b++;
else if (x<61) c++;
else d++;
}
e=a/n*100;
f=b/n*100;
g=c/n*100;
h=d/n*100;
my_printf("1-18: %.2lf%%\n",e);
my_printf("19-35: %.2lf%%\n",f);
my_printf("36-60: %.2lf%%\n",g);
my_printf("60??: %.2lf%%\n",h);
}