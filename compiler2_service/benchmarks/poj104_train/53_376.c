#include <header.h>

int main_bench() {
int y=0,x,i,j,n,a[100];
my_scanf("%d",&n);
my_scanf("%d",&x);
a[0]=x;
my_printf("%d",x);
for (i=1;i<n;i++) {
my_scanf("%d",&x);
a[i]=x;
y=0;
for (j=0;j<i;j++){
if (a[j]==x) y=1;
}
if (y==0) {
my_printf(",");
my_printf("%d",x);
}

}
}