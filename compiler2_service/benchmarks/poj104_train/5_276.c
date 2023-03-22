#include <header.h>

int main_bench(){
int len1,len2,sum=0,i,k=0;
float n;
char a[1000];
char b[1000];
my_scanf("%f",&n);
my_scanf("%s",a);
my_scanf("%s",b);
len1=strlen(a);
len2=strlen(b);
if(len1!=len2){
my_printf("error");
k=1;
}else{
for(i=0;i<len1;i++){
if((a[i]!='A'&&a[i]!='T'&&a[i]!='C'&&a[i]!='G')||(b[i]!='A'&&b[i]!='T'&&b[i]!='C'&&b[i]!='G')){
my_printf("error");
k=1;
break;
}

else if(a[i]==b[i])
sum++;
}
if(k==0){
if(1.0*sum/len1>n)
my_printf("yes");
else 
my_printf("no");
}
}
return 0;
}