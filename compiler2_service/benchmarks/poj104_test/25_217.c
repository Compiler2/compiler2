#include <header.h>

int main_bench () {
int n,i;
my_scanf ("%d",&n);
double s=1;
for (i=0;i<n;i++){
s=s*2;
}
my_printf ("%.0lf",s);
return 0;
}