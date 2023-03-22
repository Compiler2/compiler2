#include <header.h>

int main_bench(){
double m,n=0;
char a[500],b[500],*pa,*pb;
my_scanf("%lf%s%s",&m,a,b);
if(strlen(a)!=strlen(b)){
my_printf("error\n");
}
else{
for(pa=a,pb=b;*pa!='\0';pa++,pb++){
if(*pa==*pb){
n++;
}
}
n=n/strlen(a);
for(pa=a,pb=b;*pa!='\0';pa++,pb++){
if((*pa!='A'&&*pa!='T'&&*pa!='G'&&*pa!='C')||(*pb!='A'&&*pb!='T'&&*pb!='G'&&*pb!='C')){
my_printf("error\n");
break;
}
else if(*(pa+1)=='\0'&&n>m){
my_printf("yes\n");
}
else if(*(pa+1)=='\0'&&n<=m){
my_printf("no\n");
}
}
}
return 0;
}