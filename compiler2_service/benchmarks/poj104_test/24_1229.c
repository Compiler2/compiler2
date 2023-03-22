#include <header.h>

int main_bench(){
char a[51][50];
int i,c,b,d,e,q[50];
b=0;
c=100;
for(i=0;i<51;i++){
	my_scanf("%s",a[i]);
	if(a[i][0]>=65&&a[i][0]<=122){
	q[i]=strlen(a[i]);
    if(q[i]>b){b=q[i];d=i;}
	if(q[i]<c){c=q[i];e=i;}}
	else{break;}
}
	
my_printf("%s\n",a[d]);
my_printf("%s\n",a[e]);
return 0;
}

