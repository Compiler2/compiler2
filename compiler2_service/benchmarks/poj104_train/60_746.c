#include <header.h>

int main_bench() {
int n,i,j,s,p,q=0;
my_scanf ("%d",&n);
for (i=1;i<=n-2;i++){
s=0;p=0;
for (j=1;j<=i;j++){
if (i%j==0){
s++;
}
if ((i+2)%j==0){
p++;
}
}
if (s==2&&p==1){
my_printf ("%d %d\n",i,i+2);
q++;
}
}
if (q==0){
my_printf ("empty");
}
return 0;
}

