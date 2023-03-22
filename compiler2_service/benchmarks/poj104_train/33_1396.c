#define NUM_ITER 23891

#include <header.h>

char pd(char x);
int main_bench(){
char a[256],b[256];
int i,j,l,n;
my_scanf("%d",&n);
for (i=1;i<=n;i++){
my_scanf("%s",a);
l=strlen(a);
for (j=0;j<l;j++)
b[j]=pd(a[j]);
b[l]=0;
my_printf("%s\n",b);
}
return 0;
}
char pd(char x){
char y;
if (x=='A') y= 'T';
if (x=='T') y= 'A';
if (x=='C') y= 'G';
if (x=='G') y= 'C';
return y;
}
