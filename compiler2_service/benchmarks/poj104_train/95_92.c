#define NUM_ITER 277989

#include <header.h>

int main_bench(){
char a[81]="",b[81]="";
gets(a);
gets(b);
int i;
for(i=0;i<80;i++){
	if(a[i]>=97&&a[i]<=121){
	a[i]=a[i]-32;
	}
if(b[i]>=97&&b[i]<=121){
	b[i]=b[i]-32;}
}


if(strcmp(a,b)<0){
my_printf("<");
}
if(strcmp(a,b)==0){
my_printf("=");
}
if(strcmp(a,b)>0){
my_printf(">");
}
return 0;
}