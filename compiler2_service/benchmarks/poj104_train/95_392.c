#define NUM_ITER 1137370

#include <header.h>


int main_bench(){
char s[100],a[100];
int i;
gets(s);
gets(a);
for(i=0;s[i]!='\0';i++){
if(s[i]>='A'&&s[i]<='Z'){
s[i]=s[i]+32;
}
if(a[i]>='A'&&a[i]<='Z'){
a[i]=a[i]+32;
}
}
for(i=0;i<100;i++){
if(s[i]<a[i]){
my_printf("<");
break;
}
else if(s[i]>a[i])
{
my_printf(">");
break;
}
else if(s[i]==a[i]&&s[i]=='\0'){
my_printf("=");
break;
}

}
return 0;
}