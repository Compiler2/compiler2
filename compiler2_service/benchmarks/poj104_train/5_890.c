#include <header.h>

int main_bench() {
double n,c;
int i,j=0,m,s,t;
char a[501],b[501];
my_scanf("%lf\n",&n);
my_scanf("%s",a);
my_scanf("\n");
my_scanf("%s",b);
m=strlen(a);s=strlen(b);if(m<=s){t=m;}else{t=s;}
for(i=0;i<t;i++){
if(a[i]!='A'&&a[i]!='C'&&a[i]!='T'&&a[i]!='G'||m!=s){
my_printf("error");j=-1;break;}
if(a[i]==b[i]){
j++;}
}
c=1.0*j/m;
if(c>n){my_printf("yes");}
else if(c<=n&&c>=0){my_printf("no");}
return 0;
}




